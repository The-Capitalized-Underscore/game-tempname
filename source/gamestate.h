#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <string>
#include "character_stats.h"

enum class GameState {
	MAIN_MENU,
	GAME_MENU,
	INVENTORY_MENU,
	QUIT,
};

class GameStateManager {
private:
	GameState currentState;
	
public:
	GameStateManager();
	
	GameState getState() const;
	
	void setState(GameState newState);
};

extern GameStateManager stateManager; //declares instance of GameStateManager called 'stateManager'


#endif 
