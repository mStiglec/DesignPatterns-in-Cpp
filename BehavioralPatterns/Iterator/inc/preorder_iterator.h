#ifndef PREORDER_ITERATOR_H
#define PREORDER_ITERATOR_H

#include <stack>

#include "tree_iterator.h"

class PreorderIterator : public TreeIterator {
	private:
		// Every iterator has his stack so more iterators can be used in the same time
		// because they track they own position in collection
		std::stack<std::shared_ptr<Node>> treeNodes;
	public:
		PreorderIterator(std::shared_ptr<Node> root);
		std::shared_ptr<Node> getNext() override;
		bool isStackEmpty() override;
};



#endif // PREORDER_ITERATOR_H
