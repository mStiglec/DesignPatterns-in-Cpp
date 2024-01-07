#ifndef RIVER_EXTENSION_H
#define RIVER_EXTENSION_H

#include "extension.h"

class RiverExtension : public Extension {
  private:
    unsigned int numOfPlayers;

  public:
    RiverExtension(unsigned int numOfPlayers);

    void attachExtension() override;
    void dettachExtension() override;
    void play() override;
};

#endif