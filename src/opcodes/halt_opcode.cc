#include "opcodes/halt_opcode.h"

#include "program.h"

void HaltOpcode::execute(Program *program) {
	program->stop();
}
