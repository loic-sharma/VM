#ifndef VM_OPCODE_OPCODE_H_
#define VM_OPCODE_OPCODE_H_

#include <string>
#include <map>

class Opcode {
  public:
  	virtual ~Opcode() {};

  	virtual int get_id() = 0;
  	virtual std::string get_name() = 0;

  	virtual void execute(std::map<std::string, int> *memory) = 0;
};

#endif
