#include "tree.hpp"
#include <iostream>
using namespace std;

int main() {
  tree tree;
  tree.add_operator_node(0, NO_PARENT, Add);
  tree.add_operator_node(1, 0, Multiply);
  tree.add_number_node(2, 0, 5);
  tree.add_number_node(3, 1, 2);
  tree.add_number_node(4, 1, 3);
  int result = tree.evaluate();
  cout << result << endl; // output will be 11
}

/*
     +
    / \
   *   5
  / \
 2   3

*/
