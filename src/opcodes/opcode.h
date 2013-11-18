#ifndef VM_OPCODE_OPCODE_H_
#define VM_OPCODE_OPCODE_H_

#include <string>
#include <map>

class Program;

class Opcode {
  public:
  	virtual ~Opcode() {};

  	virtual void execute(Program *program) = 0;
};

#endif
