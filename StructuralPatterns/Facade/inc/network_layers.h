#ifndef NETWORK_LAYERS_H
#define NETWORK_LAYERS_H

#include "network_elements.h"

class ApplicationLayer {
  public:
    ApplicationLayer() = default;

    void send(std::string message);
    void receive(std::string message);
};

class TransportLayer {
  public:
    TransportLayer() = default;

    void send(std::string message);
    void createSegment(std::string message);
    void receive(std::string message);
};

class InternetLayer {
  private:
    Router router;

  public:
    InternetLayer() = delete;
    InternetLayer(Router router);

    void send(std::string message);
    void updateRouterData();
    void createIpPacket(std::string message);
    void receive(std::string message);
};

class NetworkAccessLayer {
  private:
    Modem modem;

  public:
    NetworkAccessLayer() = delete;
    NetworkAccessLayer(Modem modem);

    void send(std::string message);
    void createFrame(std::string message);
    void convertFrameToBits(std::string message);
    void receive(std::string message);
};

#endif  // NETWORK_LAYERS_H
