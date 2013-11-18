#ifndef VM_OPCODE_SET_OPCODE_H_
#define VM_OPCODE_SET_OPCODE_H_

#include <string>
#include <map>

#include "opcode.h"

class SetOpcode : public Opcode {
  public:
  	SetOpcode(std::string destination, std::string source);
  	~SetOpcode() {}

  	int get_id();
  	std::string get_name();

  	void execute(Program *program);

   private:
  	std::string destination;
  	std::string source;
};

#endif
