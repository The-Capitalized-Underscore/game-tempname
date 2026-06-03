#include <iostream>
#include "menu.h"

void showPartyMenu() {
    Menu party("PARTY");
    party.add("View members",       []() { /* ... */ });
    party.add("Assign roles",       []() { /* ... */ });
    party.add("Manage supplies",    []() { /* ... */ });
    party.add("Check morale",       []() { /* ... */ });
    party.add("Dismiss member",     []() { /* ... */ });
    party.add("Back",               []() {});          // does nothing = unwinds
    party.run(true);                                   // looping = stays open
}

int main() {
	std::cout << "main()\n";
    Menu main("MAIN MENU");
    main.add("New Game",  []() { /* startGame() */ });
    main.add("Continue",  []() { /* loadGame()  */ });
    main.add("Quit",      []() { exit(0); });
    main.run();
}


	return 0;
} //end main
