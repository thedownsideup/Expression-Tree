#include "median.hpp"

median::median(int index, int parentIndex)
{
	this->index = index;
	this->parentIndex = parentIndex;
}

int median::evaluate(std::vector<int> numbers)
{
	std::sort(numbers.begin(), numbers.end());
	return numbers[(numbers.size()-1)/2];
}