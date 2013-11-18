#include "vm/opcodes/set_opcode.h"

#include "vm/program.h"

SetOpcode::SetOpcode(std::string dest, std::string src)
	: destination(dest), source(src) {}

void SetOpcode::execute(Program *program) {
	program->memory.operator[](destination) = program->memory.operator[](source);

	program->increment_position();
}
