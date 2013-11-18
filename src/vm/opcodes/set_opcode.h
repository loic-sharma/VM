#ifndef VM_OPCODES_SET_OPCODE_H_
#define VM_OPCODES_SET_OPCODE_H_

#include <string>

#include "vm/opcodes/opcode.h"

class SetOpcode : public Opcode {
  public:
  	SetOpcode(std::string destination, std::string source);
  	~SetOpcode() {}

  	void execute(Program *program);

   private:
  	std::string destination;
  	std::string source;
};

#endif
