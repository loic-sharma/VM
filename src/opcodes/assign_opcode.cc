#include "assign_opcode.h"

AssignOpcode::AssignOpcode(std::string var, int val)
	: variable(var), value(val) {}

int AssignOpcode::get_id() {
	return 1;
}

std::string AssignOpcode::get_name() {
	return "assign";
}

void AssignOpcode::execute(Program *program) {
	program->memory.operator[](variable) = value;
}
