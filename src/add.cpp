#include "add.hpp"

add::add(int index, int parentIndex)
{
	this->index = index;
	this->parentIndex = parentIndex;
}

int add::evaluate(std::vector<int> numbers)
{
	return numbers[0] + numbers[1];
}