#ifndef ARRAY_HANDLER_SELECTION_H
#define ARRAY_HANDLER_SELECTION_H

#include <vector>

#include "array_handler.h"

class ArrayHandlerSelection : public ArrayHandler {
  public:
    ArrayHandlerSelection(std::vector<int>& vec);
    void sort() override;
};

#endif  // ARRAY_HANDLER_SELECTION_H