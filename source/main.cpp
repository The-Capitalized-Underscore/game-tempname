#include <iostream>
#include "menus/menu_Framework.h"
#include "menus/menu_GameMenu.h"

int main() {
	std::cout << "main()"; //***DEBUG
    Menu mmain("===MAIN MENU===");
    mmain.add("New Game",  []() { showGameMenu(); });
    mmain.add("Continue",  []() { showGameMenu(); });
    mmain.add("Quit",      []() { exit(0); });
    
    while (true) {
        mmain.run();
	} //end while

    return 0;
} //end main
