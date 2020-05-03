#include "operand.hpp"

operand::operand(int value, int index, int parentIndex)
{
	this->value = value;
	this->index = index;
	this->parentIndex = parentIndex;
}

int operand::evaluate(std::vector<int> numbers)
{
	return value;
}
