#include <iostream>
#include "lib/Node.h"
#include "SplayTree.h"
using namespace std;

int main(int argc, const char *argv[]) {
  Node<int> node(1);
  SplayTree<int> tree(&node);
  cout << tree << endl;
  return 0;
}