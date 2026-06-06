#include "gamestate.h"

GameStateManager::GameStateManager() {
	currentState = GameState::MAIN_MENU;
}; //end constructor

GameState GameStateManager::getState() const {
	return currentState;
} //end getState()

void GameStateManager::setState(GameState newState) {
	currentState = newState;
}; //end setState()
