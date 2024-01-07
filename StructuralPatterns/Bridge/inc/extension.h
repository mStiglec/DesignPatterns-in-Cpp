#ifndef EXTENSION_H
#define EXTENSION_H

class Extension {
  public:
    virtual void attachExtension() = 0;
    virtual void dettachExtension() = 0;
    virtual void play() = 0;
};

#endif