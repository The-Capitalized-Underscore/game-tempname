#include "menu.h"
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
		for (int i = 0; i < (int)options.size(); i++)
		    std::cout << i + 1 << ") " << options[i].label << "\n";
		std::cout << "> ";
		std::cout.flush(); // make sure prompt appears before blocking on cin
	} //end void display


	int Menu::getInput() const {
		int choice;
		if(!(std::cin >> choice)) { //check numeric input
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard everything up to and including the next newline
			std::cout << "Invalid input...";
			return -1;
		} //end if
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if(choice >= 1 && choice <= (int)options.size())
			return choice;
		std::cout << "Invalid input...\n";
		return -1;
	}; //end int getInput

