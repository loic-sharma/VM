#ifndef VM_OPCODES_GOTO_OPCODE_H_
#define VM_OPCODES_GOTO_OPCODE_H_

#include <string>

#include "vm/opcodes/opcode.h"

class GotoOpcode : public Opcode {
  public:
  	GotoOpcode(std::string marker);
  	~GotoOpcode() {}

  	void execute(Program *program);

  private:
  	std::string marker;
};

#endif
