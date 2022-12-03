#include <iostream>

#include "../inc/network_elements.h"

void Modem::convertAnalogData(std::string data){
	std::cout << "converting " << data << " from volts to ones and zeroes" << std::endl;
}

void Modem::convertDigitalData(std::string data){
	std::cout << "converting " << data << " from ones and zeros to volts" << std::endl;
}

void Router::updateRoutingTable(){
	std::cout << "update routing table" << std::endl;
}

void Router::updateForwardingTable(){
	std::cout << "update forwarding table" << std::endl;
}

void Router::routeMessage(){
	std::cout << "route message to destionation" << std::endl;
}