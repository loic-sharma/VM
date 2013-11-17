#include "../src/program.h"
#include "../src/opcodes/assign_opcode.h"
#include "../src/opcodes/set_opcode.h"
#include "../src/opcodes/print_opcode.h"

int main(int argc, const char *argv[]) {
	Program program;

	program.add_opcode(new AssignOpcode("x", 2));
	program.add_opcode(new SetOpcode("y", "x"));
	program.add_opcode(new PrintOpcode("y"));

	program.execute();

	return 0;
}
