#ifndef VM_OPCODES_HALT_OPCODE_H_
#define VM_OPCODES_HALT_OPCODE_H_

#include "vm/opcodes/opcode.h"

class HaltOpcode : public Opcode {
  public:
  	~HaltOpcode() {}

  	void execute(Program *program);
};

#endif
