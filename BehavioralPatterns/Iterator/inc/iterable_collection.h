#ifndef ITERABLE_COLLECTION_H
#define ITERABLE_COLLECTION_H

#include "tree_iterator.h"

class IterableCollection {
  public:
    virtual std::shared_ptr<TreeIterator> getPreorderIterator() = 0;
    virtual std::shared_ptr<TreeIterator> getInorderIterator() = 0;
};

#endif  // ITERABLE_COLLECTION_H
