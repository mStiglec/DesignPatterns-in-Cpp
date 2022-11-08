#include <iostream>
#include <string>
#include <memory>

#include "../inc/board_game2.h"

BoardGame2::BoardGame2(unsigned int _numOfPlayers, std::string _rules)
	:numOfPlayers(_numOfPlayers),rules(_rules){}

void BoardGame2::setBoard(){
	std::cout << "Set GameBoard1" << std::endl;
}

void BoardGame2::cleanBoard(){
	std::cout << "Clean GameBoard2" << std::endl;
}

void BoardGame2::play(){
	if(this->extension != nullptr){
		std::cout << "Throwing dice ..." << std::endl;
		extension->play();
	}else{
		std::cout << "Throwing dice ..." << std::endl;
	}
}

void BoardGame2::setExtension(std::shared_ptr<Extension> _extension){
	this->extension = _extension;
	extension->attachExtension();
}