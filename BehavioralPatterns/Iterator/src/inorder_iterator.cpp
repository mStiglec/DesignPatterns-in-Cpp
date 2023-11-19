#include "../inc/inorder_iterator.h"

InorderIterator::InorderIterator(std::shared_ptr<Node> treeRoot)
{
  this->moveLeft(treeRoot);
}

bool InorderIterator::isStackEmpty()
{
  return this->treeNodes.empty();
}

void InorderIterator::moveLeft(std::shared_ptr<Node> node)
{
  while (node != nullptr)
  {
    this->treeNodes.push(node);
    node = node->left;
  }
}

std::shared_ptr<Node> InorderIterator::getNext()
{
  std::shared_ptr<Node> node = this->treeNodes.top();
  this->treeNodes.pop();

  if (node->right != nullptr)
  {
    this->moveLeft(node->right);
  }

  return node;
}
