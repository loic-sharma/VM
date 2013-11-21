#include "vm/objects/object.h"

#include "vm/objects/instance.h"

Object::Object() : locked(false) {}

Object::Object(std::string n) : locked(false), name(n) {}

Object::~Object() {
	std::map<std::string, Property *>::iterator propertyIterator;
	std::map<std::string, Method *>::iterator methodIterator;

	for(propertyIterator = properties.begin(); propertyIterator != properties.end(); propertyIterator++) {
		delete propertyIterator->second;
	}

	for(methodIterator = methods.begin(); methodIterator != methods.end(); methodIterator++) {
		delete methodIterator->second;
	}
}

void Object::set_name(std::string n) {
	name = n;
}

std::string Object::get_name() const {
	return name;
}

void Object::add_property(std::string name) {
	add_property(name, new Property());
}

void Object::add_property(std::string name, Property *property) {
	properties[name] = property;
}

std::map<std::string, Property *> Object::get_properties() {
	return properties;
}

void Object::set_constructor(Method *constructor) {

}

void Object::set_destructor(Method *destructor) {

}

void Object::add_method(std::string name, Method *method) {
	methods[name] = method;
}

Method *Object::get_method(std::string name) {
	return methods[name];
}

Instance *Object::instantiate() {
	std::vector<Instance *> arguments;

	return instantiate(arguments);
}

Instance *Object::instantiate(std::vector<Instance *> arguments) {
	return new Instance(this);
}

void Object::lock() {
	locked = true;

	// Check that all abstract methods are implemented.
}
