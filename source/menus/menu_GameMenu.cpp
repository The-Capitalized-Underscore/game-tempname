#include <iostream>
#include "menu_Framework.h"

void showGameMenu() {
	bool keepGoing = true;
    Menu game_menu("Game Menu");
    game_menu.add("Explore",			[]() { /* ... */ });
    //game_menu.add("Datavault",			[]() { /* ... */ });
    //game_menu.add("Inventory",			[]() { /* ... */ });
    //game_menu.add("Harvest/Work",       []() { /* ... */ });
    //game_menu.add("Factions",			[]() { /* ... */ });
	//game_menu.add("Party",				[]() { /* ... */ });
    game_menu.add("Back",               [&keepGoing]() { keepGoing = false; }); //lambdas --> anonymous inline functions
    
	while(keepGoing) {
		game_menu.run(); //run once, then check keepGoing
	} //end while
} //end showGameMenu
