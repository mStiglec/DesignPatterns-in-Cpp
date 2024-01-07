#ifndef FOREST_EXTENSION_H
#define FOREST_EXTENSION_H

#include "extension.h"

class ForestExtension : public Extension {
  private:
    unsigned int numOfPlayers;

  public:
    ForestExtension(unsigned int numOfPlayers);

    void attachExtension() override;
    void dettachExtension() override;
    void play() override;
};

#endif