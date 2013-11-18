#include "goto_opcode.h"

#include "../Program.h"

GotoOpcode::GotoOpcode(std::string m) : marker(m) {}

void GotoOpcode::execute(Program *program) {
	program->goto_marker(marker);
}
