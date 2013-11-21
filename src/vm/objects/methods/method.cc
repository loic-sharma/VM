#include "vm/objects/methods/method.h"

Method::~Method() {
	std::map<std::string, Parameter *>::iterator iterator;

	for(iterator = parameters.begin(); iterator != parameters.end(); iterator++) {
		delete iterator->second;
	}
}

void Method::add_parameter(std::string name) {
	parameters[name] = new Parameter;
}

void Method::add_parameter(std::string name, Parameter *parameter) {
	parameters[name] = parameter;
}
