#ifndef VM_OBJECTS_OBJECT_H_
#define VM_OBJECTS_OBJECT_H_

#include <map>
#include <vector>
#include <string>

#include "vm/objects/property.h"
#include "vm/objects/methods/method.h"

class Instance;

class Object {
  public:
	Object();
	Object(std::string name);
	~Object();

	void set_name(std::string name);
	std::string get_name() const;

	void add_property(std::string name);
	void add_property(std::string name, Property *property);

	std::map<std::string, Property *> get_properties();

	void set_constructor(Method *constructor);
	void set_destructor(Method *destructor);
	void add_method(std::string name, Method *method);

	Method *get_method(std::string name);

	Instance *instantiate();
	Instance *instantiate(std::vector<Instance *> arguments);

	void lock();

  private:
  	bool locked;

  	std::string name;

	std::map<std::string, Property *> properties;
	std::map<std::string, Method *> methods;
};

#endif
