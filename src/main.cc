#include "vm/program.h"
#include "vm/opcodes/opcodes.h"

int main(int argc, const char *argv[]) {
	Program program;

	program.add_opcode(new AssignOpcode("x", 2));
	program.add_opcode(new PrintOpcode("x"));
	program.add_opcode(new HaltOpcode());

	program.execute();

	return 0;
}
