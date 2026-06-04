#include <iostream>
#include "menu.h"

void showPartyMenu() {
	bool keepGoing = true;
    Menu party("PARTY");
    party.add("View members",       []() { /* ... */ });
    party.add("Assign roles",       []() { /* ... */ });
    party.add("Manage supplies",    []() { /* ... */ });
    party.add("Check morale",       []() { /* ... */ });
    party.add("Dismiss member",     []() { /* ... */ });
    party.add("Back",               [&keepGoing]() { keepGoing = false; }); //lambdas --> anonymous inline functions
    
	while(keepGoing) {
		party.run(); //run once, then check keepGoing
	} //end while
} //end showPartyMenu

int main() {
	std::cout << "main()";
    Menu mmain("MAIN MENU");
    mmain.add("New Game",  []() { showPartyMenu(); });
    mmain.add("Continue",  []() { /* loadGame()  */ });
    mmain.add("Quit",      []() { exit(0); });
    
    while (true)
        mmain.run();

    return 0;
} //end main
