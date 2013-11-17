#include "set_opcode.h"

SetOpcode::SetOpcode(std::string dest, std::string src)
	: destination(dest), source(src) {}

int SetOpcode::get_id() {
	return 2;
}

std::string SetOpcode::get_name() {
	return "set";
}

void SetOpcode::execute(std::map<std::string, int> *memory) {
	memory->operator[](destination) = memory->operator[](source);
}
