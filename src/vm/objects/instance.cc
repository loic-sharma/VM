#include "vm/objects/instance.h"

#include <iostream>

Instance::Instance(Object *o) : reference_count(1), object(o) {
	object->lock();

	properties = object->get_properties();
}

Instance::~Instance() {
	std::map<std::string, Property *>::iterator iterator;

	for(iterator = properties.begin(); iterator != properties.end(); iterator++) {
		delete iterator->second;
	}

	delete object;
}

void Instance::increment_reference_count() {
	reference_count++;
}

void Instance::decrement_reference_count() {
	reference_count--;

	if(reference_count == 0) {
		delete this;
	}
}

Property *Instance::get_property(std::string property) {
	return properties[property];
}

Instance *Instance::call_method(std::string method) {
	std::map<std::string, Instance *> parameters;

	return call_method(method, parameters);
}

Instance *Instance::call_method(std::string name, std::map<std::string, Instance *> parameters) {
	parameters["this"] = this;

	return object->get_method(name)->execute(parameters);
}

std::string Instance::to_string() {
	std::string output;

	output = object->get_name() + "(" + std::to_string(properties.size()) + ") {\n";

	// Get all of the instance's properties' values.
	std::map<std::string, Property *>::iterator iterator;

	for(iterator = properties.begin(); iterator != properties.end(); iterator++) {
	 	output += "\t[\"" + iterator->first + "\"] =>\n";
	 	output += "\t" + iterator->second->to_string() + "\n";
	}

	return output += "}";
}
