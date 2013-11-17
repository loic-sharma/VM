#ifndef VM_PROGRAM_H_
#define VM_PROGRAM_H_

#include <vector>
#include <map>

#include "opcodes/opcode.h"

class Program {
  public:
  	void add_opcode(Opcode *opcode);
  	void execute();

  	~Program();

  private:
  	std::vector<Opcode *> opcodes;
  	std::map<std::string, int> memory;
};

#endif
