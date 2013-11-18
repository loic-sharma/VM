#include "program.h"
#include "opcodes/assign_opcode.h"
#include "opcodes/if_opcode.h"
#include "opcodes/print_opcode.h"
#include "opcodes/halt_opcode.h"

int main(int argc, const char *argv[]) {
	Program program;

	program.add_opcode(new AssignOpcode("x", 0));
	program.add_opcode(new AssignOpcode("y", 1));
	program.add_opcode(new IfOpcode("x", "wrong"));
	program.add_opcode(new IfOpcode("y", "right"));
	
	program.add_marker("wrong");
	program.add_opcode(new PrintOpcode("x"));
	program.add_opcode(new HaltOpcode());

	program.add_marker("right");
	program.add_opcode(new PrintOpcode("y"));
	program.add_opcode(new HaltOpcode());

	program.execute();

	return 0;
}
