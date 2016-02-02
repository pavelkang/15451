//
// Created by Kai Kang on 2/1/16.
//

#ifndef INC_15451_NODE_H
#define INC_15451_NODE_H

#include <iostream>

template<class T> class Node {
  private:
    T val;
    Node *left;
    Node *right;
  public:
    Node(T v) { val = v; }

    Node(T v, Node *l, Node *r) {
      left = l;
      right = r;
    }

    T getVal() const {
      return val;
    }

    void setVal(T val) {
      Node::val = val;
    }

    Node *getLeft() const {
      return left;
    }

    void setLeft(Node *left) {
      Node::left = left;
    }

    Node *getRight() const {
      return right;
    }

    void setRight(Node *right) {
      Node::right = right;
    }

    friend std::ostream &operator<<(std::ostream &os, const Node<T> &node) {
      os << "Node(" << node.getVal() << ")" << std::endl;
      return os;
    }
  };


#endif //INC_15451_NODE_H
