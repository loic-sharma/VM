#include "halt_opcode.h"

void HaltOpcode::execute(Program *program) {
	program->stop();
}
