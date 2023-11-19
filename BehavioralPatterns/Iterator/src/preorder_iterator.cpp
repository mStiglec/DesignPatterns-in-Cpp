#include "../inc/preorder_iterator.h"

PreorderIterator::PreorderIterator(std::shared_ptr<Node> treeRoot)
{
  this->treeNodes.push(treeRoot);
}

bool PreorderIterator::isStackEmpty()
{
  return this->treeNodes.empty();
}

std::shared_ptr<Node> PreorderIterator::getNext()
{
  std::shared_ptr<Node> node = this->treeNodes.top();
  this->treeNodes.pop();

  if (node->right != nullptr)
  {
    this->treeNodes.push(node->right);
  }
  if (node->left != nullptr)
  {
    this->treeNodes.push(node->left);
  }

  return node;
}
