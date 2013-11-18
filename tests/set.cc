#include "program.h"
#include "opcodes/assign_opcode.h"
#include "opcodes/set_opcode.h"
#include "opcodes/print_opcode.h"
#include "opcodes/halt_opcode.h"

int main(int argc, const char *argv[]) {
	Program program;

	program.add_opcode(new AssignOpcode("x", 2));
	program.add_opcode(new SetOpcode("y", "x"));
	program.add_opcode(new PrintOpcode("y"));
	program.add_opcode(new HaltOpcode());

	program.execute();

	return 0;
}
