#ifndef VM_OBJECTS_METHODS_METHOD_H_
#define VM_OBJECTS_METHODS_METHOD_H_

#include <string>
#include <map>
#include <vector>

#include "vm/objects/parameter.h"
#include "vm/opcodes/opcode.h"

class Instance;

class Method {
  public:
	virtual ~Method();

	void add_parameter(std::string name);
	void add_parameter(std::string name, Parameter *parameter);

	virtual Instance *execute(std::map<std::string, Instance *> arguments) = 0;

  private:
	std::map<std::string, Parameter *> parameters;
	std::vector<Opcode *> opcodes;
};

#endif
