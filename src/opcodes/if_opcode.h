#ifndef VM_OPCODE_IF_OPCODE_H_
#define VM_OPCODE_IF_OPCODE_H_

#include <string>

#include "opcodes/opcode.h"

class IfOpcode : public Opcode {
  public:
  	IfOpcode(std::string expression, std::string marker);
  	~IfOpcode() {}

  	void execute(Program *program);

  private:
  	std::string expression;
  	std::string marker;
};

#endif
