#include "opcodes/goto_opcode.h"

#include "program.h"

GotoOpcode::GotoOpcode(std::string m) : marker(m) {}

void GotoOpcode::execute(Program *program) {
	program->goto_marker(marker);
}
