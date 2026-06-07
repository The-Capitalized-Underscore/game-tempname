#include <iostream>
#include "menu_Framework.h"
#include "../gamestate.h"

//forward declarations no longer needed. gamestate system means main.cpp has full control over looping and calling of menu functions

void showInventoryMenu() {
    Menu inventory_menu("Inventory Menu");
    inventory_menu.add("View Equipment",		[]() { /* ... */ });
    inventory_menu.add("View Supplies",			[]() { /* ... */ });
    //inventory_menu.add("",					[]() { /* ... */ });
    //inventory_menu.add("",					[]() { /* ... */ });
    //inventory_menu.add("",					[]() { /* ... */ });
	//inventory_menu.add("",					[]() { /* ... */ });
    inventory_menu.add("Back",					[]() { stateManager.setState(GameState::GAME_MENU); }); //lambdas --> anonymous inline functions
    
	inventory_menu.run();
} //end showInventoryMenu


void showGameMenu() {
    Menu game_menu("Game Menu");
    //game_menu.add("Explore",			[]() { /* ... */ });
    //game_menu.add("Datavault",			[]() { /* ... */ });
    game_menu.add("Inventory",			[]() { stateManager.setState(GameState::INVENTORY_MENU); });
    //game_menu.add("Harvest/Work",       []() { /* ... */ });
    //game_menu.add("Factions",			[]() { /* ... */ });
	//game_menu.add("Party",				[]() { /* ... */ });
    game_menu.add("Back**",               []() { stateManager.setState(GameState::MAIN_MENU); }); 
    
	game_menu.run();
} //end showGameMenu

