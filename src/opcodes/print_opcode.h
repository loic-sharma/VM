#ifndef VM_OPCODE_PRINT_OPCODE_H_
#define VM_OPCODE_PRINT_OPCODE_H_

#include <string>
#include <map>

#include "opcode.h"

class PrintOpcode : public Opcode {
  public:
  	PrintOpcode(std::string variable);
  	~PrintOpcode() {}

  	int get_id();
  	std::string get_name();

  	void execute(Program *program);

   private:
  	std::string variable;
};

#endif
