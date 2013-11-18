#ifndef VM_OPCODE_HALT_OPCODE_H_
#define VM_OPCODE_HALT_OPCODE_H_

#include "opcodes/opcode.h"

class HaltOpcode : public Opcode {
  public:
  	~HaltOpcode() {}

  	void execute(Program *program);
};

#endif
