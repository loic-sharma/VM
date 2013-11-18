#ifndef VM_PROGRAM_H_
#define VM_PROGRAM_H_

#include <vector>
#include <map>

#include "opcodes/opcode.h"

class Program {
  public:
  	Program();

  	void add_opcode(Opcode *opcode);
  	void add_marker(std::string marker);
  	void execute();

  	void increment_position();
  	void goto_marker(std::string);
  	void stop();

  	~Program();

  private:
  	bool executing;
  	int position;

  	std::vector<Opcode *> opcodes;
  	std::map<std::string, int> markers;
  	std::map<std::string, int> memory;
};

#endif
