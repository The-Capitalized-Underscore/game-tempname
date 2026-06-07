#include <iostream>
#include "menus/menu_Framework.h"
#include "menus/menu_GameMenu.h"
#include "gamestate.h"

GameStateManager stateManager; //defines instance of GameStateManager called 'stateManager'

int main() {
	std::cout << "main()"; //***DEBUG
    Menu mmain("===MAIN MENU===");
    mmain.add("New Game",  []() { stateManager.setState(GameState::GAME_MENU); });
    mmain.add("Continue",  []() { stateManager.setState(GameState::GAME_MENU); });
    mmain.add("Quit",      []() { stateManager.setState(GameState::QUIT); });
    
    while (stateManager.getState() != GameState::QUIT) {
        switch (stateManager.getState()) {
			case GameState::MAIN_MENU:
				mmain.run();
				break;
			case GameState::GAME_MENU:
				showGameMenu();
				break;
			case GameState::INVENTORY_MENU:
				showInventoryMenu();
				break;
			case GameState::QUIT:
				break;
		} //end switch
	} //end while

    return 0;
} //end main
