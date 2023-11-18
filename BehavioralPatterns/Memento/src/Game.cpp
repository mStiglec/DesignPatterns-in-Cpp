#include <ctime>
#include <chrono>

#include "../inc/Game.h"

Game::Game(std::string name,
		   std::shared_ptr<PlayerStats> playerStats)
{
  this->name = name;
  this->playerStats = *playerStats;
  this->level = 1;
};

void Game::playGameForOneHour(){
  level++;
  playerStats.modifyPlayerStats();
}

void Game::displayPlayerStats(){
  playerStats.displayPlayerStats();
}

std::shared_ptr<Game::GameSavePoint> Game::save(std::string savePointName){
  return std::make_shared<GameSavePoint>(*this, savePointName);
}

Game::GameSavePoint::GameSavePoint(Game& game, std::string savePointName){
  this->level = game.level;
  this->playerStats = game.playerStats;
  this->savePointName = savePointName;
  saveTime();
}

void Game::GameSavePoint::saveTime(){
  auto now = std::chrono::system_clock::now();
  const std::time_t nowTime = std::chrono::system_clock::to_time_t(now);
  time = std::ctime(&nowTime);
}

void Game::restart(std::shared_ptr<GameSavePoint> savePoint){
  savePoint->reset(*this);
}

std::string Game::GameSavePoint::getSavePointName(){
  return savePointName;
}

std::string Game::GameSavePoint::getSavePointTime(){
  return std::string(time);
}

void Game::GameSavePoint::reset(Game& game){
  game.level = this->level;
  game.playerStats = this->playerStats;
}