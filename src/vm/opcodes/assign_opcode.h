#ifndef VM_OPCODES_ASSIGN_OPCODE_H_
#define VM_OPCODES_ASSIGN_OPCODE_H_

#include <string>

#include "vm/opcodes/opcode.h"

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
