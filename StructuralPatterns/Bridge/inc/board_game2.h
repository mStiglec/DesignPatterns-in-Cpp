#ifndef BOARD_GAME_2_H
#define BOARD_GAME_2_H

#include <string>
#include <memory>

#include "board_game.h"
#include "extension.h"

class BoardGame2 : public BoardGame{
	private:
		unsigned int numOfPlayers;
		std::string rules;

	public:
		BoardGame2() = delete;
		BoardGame2(unsigned int numOfPlayers, std::string rules);

		void setBoard() override;
		void cleanBoard() override;
		void play() override;
		void setExtension(std::shared_ptr<Extension> extension) override;

};

#endif