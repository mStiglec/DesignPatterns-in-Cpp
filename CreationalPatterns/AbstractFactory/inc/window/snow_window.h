#ifndef SNOW_WINDOW_H
#define SNOW_WINDOW_H

#include "window.h"

class SnowWindow : public Window {
  public:
    SnowWindow(double height, double width);

    void open() override;
    void close() override;
};

#endif