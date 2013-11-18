#include "add_opcode.h"

AddOpcode::AddOpcode(std::string dest, std::string one, std::string two)
	: destination(dest), first(one), second(two) {}

int AddOpcode::get_id() {
	return 3;
}

std::string AddOpcode::get_name() {
	return "add";
}

void AddOpcode::execute(Program *program) {
	int firstValue = program->memory.operator[](first);
	int secondValue = program->memory.operator[](second);

	program->memory.operator[](destination) = firstValue + secondValue;

	program->increment_position();
}
