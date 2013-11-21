#include "vm/objects/property.h"
#include "vm/objects/instance.h"

Property::Property() {
	visibility = PUBLIC;
	type = "";

	instance = NULL;
}

Property::Property(Visibility v) {
	visibility = v;
	type = "";

	instance = NULL;
}

Property::Property(Visibility v, std::string t) {
	visibility = v;
	type = t;

	instance = NULL;
}

Property::~Property() {
	delete instance;
}

void Property::set_instance(Instance *i) {
	instance = i;
}

Instance *Property::get_instance() {
	return instance;
}

std::string Property::to_string() {
	if(instance == NULL) {
		return "NULL";
	}
	else {
		return instance->to_string();
	}
}
