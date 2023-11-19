#ifndef NODE_H
#define NODE_H

#include <memory>

// Tree element - will hold only number
class Node {
 public:
  int data;
  std::shared_ptr<Node> right;  // pointer to right child
  std::shared_ptr<Node> left;   // pointer to left child

  Node(int data)
  {
    this->data = data;
    this->right = nullptr;
    this->left = nullptr;
  };
};

#endif  // NODE_H
