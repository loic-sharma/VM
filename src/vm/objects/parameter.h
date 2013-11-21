#ifndef VM_OBJECTS_PARAMETER_H_
#define VM_OBJECTS_PARAMETER_H_

#include <string>

class Parameter {
  public:
	enum Visibility {PUBLIC, PROTECTED, PRIVATE};

	Parameter();
	Parameter(Visibility);
	Parameter(Visibility, std::string);

	Visibility visibility;
	std::string type;
};

#endif
