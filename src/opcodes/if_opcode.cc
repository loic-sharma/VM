#include "opcodes/if_opcode.h"

#include "program.h"

IfOpcode::IfOpcode(std::string exp, std::string m)
	: expression(exp), marker(m) {}

void IfOpcode::execute(Program *program) {
	int expr = program->memory.operator[](expression);

	if(expr != 0) {
		program->goto_marker(marker);
	}
	else {
		program->increment_position();
	}
}
