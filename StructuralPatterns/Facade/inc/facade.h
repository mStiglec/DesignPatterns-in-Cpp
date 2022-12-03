#ifndef FACADE_H
#define FACADE_H

#include <string>

class Facade{
	public:
		Facade() = default;
		void sendMessageOverNetwork(std::string message);
};


#endif // FACADE_H
