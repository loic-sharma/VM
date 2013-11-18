#include "halt_opcode.h"

#include "../Program.h"

void HaltOpcode::execute(Program *program) {
	program->stop();
}
