#ifndef NETWORK_ELEMENTS_H
#define NETWORK_ELEMENTS_H

#include <string>

class Modem {
  public:
    Modem() = default;
    void convertAnalogData(std::string data);
    void convertDigitalData(std::string data);
};

class Router {
  public:
    Router() = default;
    void updateRoutingTable();
    void updateForwardingTable();
    void routeMessage();
};

#endif  // NETWORK_ELEMENTS_H
