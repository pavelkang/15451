//
// Created by Kai Kang on 1/31/16.
//

#ifndef INC_15451_SPLAYTREE_H
#define INC_15451_SPLAYTREE_H

#include <iostream>
#include "lib/Node.h"

template <class T> class SplayTree {

private:
  Node<T> *root;
  int size;
public:
  SplayTree(Node<T> *root) {this->root = root; this->size = 1;}

  virtual ~SplayTree() { }

  Node<T> *getRoot() const {
    return root;
  }

  void setRoot(Node<T> *root) {
    SplayTree::root = root;
  }

  int getSize() const {
    return size;
  }

  void setSize(int size) {
    SplayTree::size = size;
  }

  friend std::ostream &operator<<(std::ostream &os, const SplayTree<T> &tree) {
    os << "SplayTree of size " << tree.getSize() << std::endl;
    return os;
  }
};


#endif //INC_15451_SPLAYTREE_H
