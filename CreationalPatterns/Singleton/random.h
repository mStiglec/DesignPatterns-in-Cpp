#ifndef HEADER_H_RANDOM
#define HEADER_H_RANDOM

class Random{
	private: 
		static Random* random;
		double randomNumber;
		Random(): randomNumber(0){};

	public:
		Random(Random& random) = delete;
		void operator=(const Random&) = delete;
		static Random* getInstance();
		void changeRandomNumber();
		double getRandomNumber() const;
};

#endif