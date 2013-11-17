#include "add_opcode.h"

AddOpcode::AddOpcode(std::string dest, std::string one, std::string two)
	: destination(dest), first(one), second(two) {}

int AddOpcode::get_id() {
	return 3;
}

std::string AddOpcode::get_name() {
	return "add";
}

void AddOpcode::execute(std::map<std::string, int> *memory) {
	int firstValue = memory->operator[](first);
	int secondValue = memory->operator[](second);

	memory->operator[](destination) = firstValue + secondValue;
}
