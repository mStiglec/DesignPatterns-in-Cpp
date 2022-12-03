#include "../inc/facade.h"
#include "../inc/network_layers.h"
#include "../inc/network_elements.h"

void Facade::sendMessageOverNetwork(std::string message){
	Modem modem;
	Router router;

	ApplicationLayer applicationLayer;
	TransportLayer transportLayer;
	InternetLayer internetLayer(router);
	NetworkAccessLayer networkAccessLayer(modem);

	applicationLayer.send(message);
	
	transportLayer.receive(message);
	transportLayer.createSegment(message);
	transportLayer.send(message);

	internetLayer.receive(message);
	internetLayer.updateRouterData();
	internetLayer.createIpPacket(message);
	internetLayer.send(message);

	networkAccessLayer.receive(message);
	networkAccessLayer.createFrame(message);
	networkAccessLayer.convertFrameToBits(message);
	networkAccessLayer.send(message);
}