#ifndef TREE_H
#define TREE_H

#include "operand.hpp"
#include "add.hpp"
#include "multiply.hpp"
#include "not.hpp"
#include "median.hpp"

#include <vector>

const int NO_PARENT = -1;

class Exception{};
class NoRootException{};

enum OperatorType {Add, Multiply, Not, Median};

class tree
{
public:
	void add_number_node(int index, int parent_index, int value);
	void add_operator_node(int index, int parent_index, OperatorType type);
	int evaluate();
	int recursiveEvaluate(node* node);
	node* findRoot();

private:
	std::vector<node*> nodes;
};

#endif