#ifndef WOODEN_WINDOW_H
#define WOODEN_WINDOW_H

#include "window.h"

class WoodenWindow : public Window {
  public:
    WoodenWindow(double height, double width);

    void open() override;
    void close() override;
};

#endif