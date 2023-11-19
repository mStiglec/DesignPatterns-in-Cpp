#include "../inc/tree.h"

#include "../inc/inorder_iterator.h"
#include "../inc/preorder_iterator.h"

Tree::Tree(std::vector<int> treeData)
{
  root = this->buildTree(treeData, 0);
}

// client does not know this exist
std::shared_ptr<Node> Tree::buildTree(std::vector<int> treeData, int position)
{
  if ((unsigned)position >= treeData.size())
  {
    return nullptr;
  }

  std::shared_ptr<Node> node = std::make_shared<Node>(treeData[position]);

  node->left = this->buildTree(treeData, 2 * position + 1);   // left child
  node->right = this->buildTree(treeData, 2 * position + 2);  // right child

  return node;
}

std::shared_ptr<Tree> Tree::createTree(std::vector<int> treeData)
{
  return std::shared_ptr<Tree>(new Tree(treeData));
}

std::shared_ptr<TreeIterator> Tree::getPreorderIterator()
{
  return std::make_shared<PreorderIterator>(this->root);
}

std::shared_ptr<TreeIterator> Tree::getInorderIterator()
{
  return std::make_shared<InorderIterator>(this->root);
}

std::shared_ptr<Node> Tree::getRoot() const
{
  return this->root;
}