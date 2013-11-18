#include "assign_opcode.h"

#include "../Program.h"

AssignOpcode::AssignOpcode(std::string var, int val)
	: variable(var), value(val) {}

void AssignOpcode::execute(Program *program) {
	program->memory.operator[](variable) = value;

	program->increment_position();
}
