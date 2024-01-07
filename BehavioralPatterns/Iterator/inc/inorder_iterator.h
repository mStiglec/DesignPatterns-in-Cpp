#ifndef INORDER_ITERATOR_H
#define INORDER_ITERATOR_H

#include <stack>

#include "tree_iterator.h"

class InorderIterator : public TreeIterator {
  private:
    // Every iterator has his stack so more iterators can be used in the same time
    // because they track they own position in collection
    std::stack<std::shared_ptr<Node>> treeNodes;

  public:
    InorderIterator(std::shared_ptr<Node> root);
    std::shared_ptr<Node> getNext() override;
    bool isStackEmpty() override;

    // helper for inorder iterator
    void moveLeft(std::shared_ptr<Node> node);
};

#endif  // INORDER_ITERATOR_H
