#include <iostream>
#include <memory>
#include <vector>

#include "iterable_collection.h"
#include "node.h"

// generaly it is not needed to have Tree class (it can be made only
// from nodes), this is just for example as this Tree class represent 
// collection that we want to traverse
class Tree : public IterableCollection {
	private:
		std::shared_ptr<Node> root;

		Tree(std::vector<int> treeData);
		std::shared_ptr<Node> buildTree(std::vector<int> treeData, int position);

	public:
		static std::shared_ptr<Tree> createTree(std::vector<int> treeData);
		std::shared_ptr<TreeIterator> getPreorderIterator() override;
		std::shared_ptr<TreeIterator> getInorderIterator() override;
		std::shared_ptr<Node> getRoot() const;
};