#include "set_opcode.h"

SetOpcode::SetOpcode(std::string dest, std::string src)
	: destination(dest), source(src) {}

int SetOpcode::get_id() {
	return 2;
}

std::string SetOpcode::get_name() {
	return "set";
}

void SetOpcode::execute(Program *program) {
	program->memory.operator[](destination) = program->memory.operator[](source);

	program->increment_position();
}
