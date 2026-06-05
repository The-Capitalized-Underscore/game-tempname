#include <iostream>
#include "menu_Framework.h"

void showInventoryMenu() {
	bool keepGoing = true;
    Menu inventory_menu("Inventory Menu");
    inventory_menu.add("View Equipment",		[]() { /* ... */ });
    inventory_menu.add("View Supplies",			[]() { /* ... */ });
    //inventory_menu.add("",					[]() { /* ... */ });
    //inventory_menu.add("",					[]() { /* ... */ });
    //inventory_menu.add("",					[]() { /* ... */ });
	//inventory_menu.add("",					[]() { /* ... */ });
    inventory_menu.add("Back",					[&keepGoing]() { keepGoing = false; }); //lambdas --> anonymous inline functions
    
	while(keepGoing) {
		inventory_menu.run(); //run once, then check keepGoing
	} //end while
} //end showGameMenu


void showGameMenu() {
	bool keepGoing = true;
    Menu game_menu("Game Menu");
    //game_menu.add("Explore",			[]() { /* ... */ });
    //game_menu.add("Datavault",			[]() { /* ... */ });
    game_menu.add("Inventory",			[]() { showInventoryMenu(); });
    //game_menu.add("Harvest/Work",       []() { /* ... */ });
    //game_menu.add("Factions",			[]() { /* ... */ });
	//game_menu.add("Party",				[]() { /* ... */ });
    game_menu.add("Back**",               [&keepGoing]() { keepGoing = false; }); 
    
	while(keepGoing) {
		game_menu.run(); //run once, then check keepGoing
	} //end while
} //end showGameMenu

