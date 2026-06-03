#ifndef MENU_H_EXISTS
#define MENU_H_EXISTS

#include <string>
#include <vector>
#include <iostream>
#include <functional>

struct Option {
	std::string label;
	std::function<void()> action; //executable when option is chosen in the menu, stores any callable that returns void
}; //end struct Option

class Main {
	std::string title;
	std::vector<Option> options;

public:
	Menu(const std::string& title) : title(title) {};

	void add(const std::string& label, std::function<void()> action) {
		options.push_back({label, action}); //append values to vector
	}; //end void add
	
	void run(bool looping = false) const {
		do {
			display();
			int choice = getInput();
			if choice == -1 continue;
			options[choice - 1].action();
		} //end do
		while(looping);
	}; //end void run

private:
	void display() const {
		std::cout << title
		for(int i=0; i < (int)options.size(); i++)
			std::cout << i+1 << ") " << options[i].label
	}; //end void display

	void getInput() {
		if(cin >> choice && choice >= 1 && choice <= (int)options.size())
			return choice;
		std::cin.clear()
		std::cout << "Invalid input..."
		return -1;
	} //end int getInput

}; //end class Main

#endif
