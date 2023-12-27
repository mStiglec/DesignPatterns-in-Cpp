#ifndef ARRAY_HANDLER_H
#define ARRAY_HANDLER_H

#include <vector>

class ArrayHandler {
  protected:
    std::vector<int> vec;

  public:
    // Template method
    void handleArray();

    // Method which will be overriden by different clients
    virtual void sort() = 0;

    // Methods same for all clients
    ArrayHandler(std::vector<int>& vec);
    void removeDuplicates();
    bool isSorted();
    void printArray();
};

#endif  // ARRAY_HANDLER_H