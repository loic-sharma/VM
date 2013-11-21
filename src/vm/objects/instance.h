#ifndef VM_OBJECTS_INSTANCE_H_
#define VM_OBJECTS_INSTANCE_H_

#include <string>
#include <map>

#include "vm/objects/object.h"
#include "vm/objects/parameter.h"

class Instance {
  public:
  	Instance(Object *object);
  	~Instance();

	void increment_reference_count();
	void decrement_reference_count();

	Property *get_property(std::string property);

	Instance *call_method(std::string method);
	Instance *call_method(std::string method, std::map<std::string, Instance *> parameters);

	std::string to_string();

  private:
	int reference_count;

	Object *object;

	std::map<std::string, Property *> properties;
};

#endif
