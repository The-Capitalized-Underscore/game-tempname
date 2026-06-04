#include "menu_Framework.h"
#include <iostream>


Menu::Menu(const std::string& title) : title(title) {} //end constructor

	void Menu::add(const std::string& label, std::function<void()> action) {
		options.push_back({label, action}); //append values to vector
	}; //end void add
	
	void Menu::run() const {
	    int choice = -1;
	    while (choice == -1) {
	        display();
	        choice = getInput();
	    } //end while
	    options[choice - 1].action();
	} //end void run


void Menu::display() const {
    std::cout << "\n" << title << "\n";
    for (int i = 0; i < (int)options.size() - 1; i++)
        std::cout << i + 1 << ") " << options[i].label << "\n";
    std::cout << "0) " << options.back().label << "\n";  // last option always shown as 0
    std::cout << "> ";
    std::cout.flush();
}

int Menu::getInput() const {
    int choice;
    if (!(std::cin >> choice)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input...\n";
        return -1;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (choice == 0)
        return (int)options.size();  // map 0 to the last option's index
    if (choice >= 1 && choice <= (int)options.size() - 1)
        return choice;
    std::cout << "Invalid input...\n";
    return -1;
}

