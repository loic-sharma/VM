#include "vm/opcodes/add_opcode.h"

#include "vm/program.h"

AddOpcode::AddOpcode(std::string dest, std::string one, std::string two)
	: destination(dest), first(one), second(two) {}

void AddOpcode::execute(Program *program) {
	int firstValue = program->memory.operator[](first);
	int secondValue = program->memory.operator[](second);

	program->memory.operator[](destination) = firstValue + secondValue;

	program->increment_position();
}
