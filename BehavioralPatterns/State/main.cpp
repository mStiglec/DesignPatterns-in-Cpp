#include <iostream>

#include "inc/WebApp.h"
#include "inc/InitialState.h"

int main(void) {
	WebApp* webApp = new WebApp(new InitialState());
	
	std::cout << "\n----------- STATUS BEFORE LOG IN ----------- \n";
	webApp->checkProducts();
	webApp->orderProducts();
	webApp->subscribeForProVersion();
	
	webApp->logIn();

	std::cout << "\n ----------- STATUS AFTER LOG IN ----------- \n";
	webApp->checkProducts();
	webApp->orderProducts();
	webApp->subscribeForProVersion();

	webApp->subscribeForProVersion();

	std::cout << "\n ----------- STATUS AFTER UPGRADE TO PRO ----------- \n";
	webApp->checkProducts();
	webApp->orderProducts();
	webApp->subscribeForProVersion();
}