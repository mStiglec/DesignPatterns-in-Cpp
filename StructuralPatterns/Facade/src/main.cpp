#include "../inc/facade.h"

int main(){
	//all complex protocol and network functions are moved into facade method
	//client does not need to handle networking 
	Facade facade;
	facade.sendMessageOverNetwork("Hello World");
}