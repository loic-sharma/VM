#ifndef VM_OPCODE_ADD_OPCODE_H_
#define VM_OPCODE_ADD_OPCODE_H_

#include <string>

#include "opcodes/opcode.h"

class AddOpcode : public Opcode {
  public:
  	AddOpcode(std::string destination, std::string first, std::string second);
  	~AddOpcode() {}

  	void execute(Program *program);

   private:
  	std::string destination;
  	std::string first;
  	std::string second;
};

#endif
