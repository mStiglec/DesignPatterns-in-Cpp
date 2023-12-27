#ifndef ARRAY_HANDLER_BUBBLE_H
#define ARRAY_HANDLER_BUBBLE_H

#include <vector>

#include "array_handler.h"

class ArrayHandlerBubble : public ArrayHandler {
  public:
    ArrayHandlerBubble(std::vector<int>& v);
    void sort() override;
};

#endif  // ARRAY_HANDLER_BUBBLE_H