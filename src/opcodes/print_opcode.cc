#include "print_opcode.h"

#include <iostream>

PrintOpcode::PrintOpcode(std::string v) : variable(v) {}

void PrintOpcode::execute(Program *program) {
	std::cout << program->memory.at(variable) << std::endl;

	program->increment_position();
}
