#include "vm/opcodes/halt_opcode.h"

#include "vm/program.h"

void HaltOpcode::execute(Program *program) {
	program->stop();
}
