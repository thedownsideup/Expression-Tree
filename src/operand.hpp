#ifndef OPERAND_H
#define OPERAND_H

#include <vector>
#include "node.hpp"

class operand : public node
{
public:
	operand(int value, int index, int parentIndex);
	int evaluate(std::vector<int> numbers);

private:
	int value;
};

#endif