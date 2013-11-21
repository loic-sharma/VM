#include "vm/objects/parameter.h"

Parameter::Parameter() {
	visibility = PUBLIC;
	type = "";
}

Parameter::Parameter(Visibility v) {
	visibility = v;
	type = "";
}

Parameter::Parameter(Visibility v, std::string t) {
	visibility = v;
	type = t;
}
