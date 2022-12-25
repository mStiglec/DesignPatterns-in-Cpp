#ifndef TREE_ITERATOR_H
#define TREE_ITERATOR_H

#include <memory>

#include "node.h"

class TreeIterator {
	public:
		virtual std::shared_ptr<Node> getNext() = 0;
		virtual bool isStackEmpty() = 0;
};

#endif // TREE_ITERATOR_H
