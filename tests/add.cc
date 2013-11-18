#include "../src/program.h"
#include "../src/opcodes/assign_opcode.h"
#include "../src/opcodes/add_opcode.h"
#include "../src/opcodes/print_opcode.h"
#include "../src/opcodes/halt_opcode.h"

int main(int argc, const char *argv[]) {
	Program program;

	program.add_opcode(new AssignOpcode("x", 2));
	program.add_opcode(new AssignOpcode("y", 3));
	program.add_opcode(new AddOpcode("z", "x", "y"));
	program.add_opcode(new PrintOpcode("z"));
	program.add_opcode(new Halt());

	program.execute();

	return 0;
}
