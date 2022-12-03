#include <iostream>

#include "../inc/network_layers.h"

// APPLICATION LAYER
void ApplicationLayer::send(std::string message){
	std::cout << "send " << message << " from application layer" << std::endl;
}

void ApplicationLayer::receive(std::string message){
	std::cout << message << " received on application layer" << std::endl;
}

// TRANSPORT LAYER
void TransportLayer::send(std::string message){
	std::cout << "send " << message << " from transport layer" << std::endl;
}

void TransportLayer::createSegment(std::string message){
	std::cout << "create segment from " << message << std::endl;
}

void TransportLayer::receive(std::string message){
	std::cout << message << " received on transport layer" << std::endl;
}

// INTERNET LAYER
InternetLayer::InternetLayer(Router _router):router(_router){}

void InternetLayer::send(std::string message){
	router.routeMessage();
	std::cout << "send " << message << " from internet layer" << std::endl;
}

void InternetLayer::createIpPacket(std::string message){
	std::cout << "create IP packet from " << message << std::endl;
}

void InternetLayer::updateRouterData(){
	router.updateRoutingTable();
	router.updateForwardingTable();
}

void InternetLayer::receive(std::string message){
	std::cout << message << " received on internet layer" << std::endl;
}

// NETWORK ACCESS LAYER
NetworkAccessLayer::NetworkAccessLayer(Modem _modem):modem(_modem){}

void NetworkAccessLayer::send(std::string message){
	std::cout << "send " << message << " from network access layer" << std::endl;
}

void NetworkAccessLayer::createFrame(std::string message){
	std::cout << "create frame from " << message << std::endl;
}

void NetworkAccessLayer::convertFrameToBits(std::string message){
	modem.convertAnalogData(message);
	std::cout << "convert frame to bits" << std::endl;
}

void NetworkAccessLayer::receive(std::string message){
	modem.convertDigitalData(message);
	std::cout << message << " received on network access layer layer" << std::endl;
}

