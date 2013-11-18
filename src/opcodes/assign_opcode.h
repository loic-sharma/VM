#ifndef VM_OPCODE_ASSIGN_OPCODE_H_
#define VM_OPCODE_ASSIGN_OPCODE_H_

#include <string>
#include <map>

#include "opcode.h"

class AssignOpcode : public Opcode {
  public:
  	AssignOpcode(std::string variable, int value);
  	~AssignOpcode() {}

  	void execute(Program *program);

   private:
  	std::string variable;
  	int value;
};

#endif
