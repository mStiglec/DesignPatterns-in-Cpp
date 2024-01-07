#ifndef NORMAL_WINDOW_H
#define NORMAL_WINDOW_H

#include "window.h"

class NormalWindow : public Window {
  public:
    NormalWindow(double height, double width);

    void open() override;
    void close() override;
};

#endif