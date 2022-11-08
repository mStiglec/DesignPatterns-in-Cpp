#ifndef BOARD_GAME_H
#define BOARD_GAME_H

#include <memory>

#include "extension.h"

class BoardGame{
	protected:
		std::shared_ptr<Extension> extension;
	public:
		virtual void setBoard() = 0;
		virtual void cleanBoard() = 0;
		virtual void play() = 0;

		// it is possible to change extension during runtime
		virtual void setExtension(std::shared_ptr<Extension> extension) = 0;
};

#endif