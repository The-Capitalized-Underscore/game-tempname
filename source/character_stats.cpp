#include "character_stats.h"
#include <iostream>

character_stats::character_stats(const std::string& initlabel, double initbase, double initcurrent, double initmax) {
	label = initlabel;
	base = initbase;
	current = initcurrent;
	max = initmax;
}; //end constructor

void character_stats::display() {
	std::cout << "Label:" << label << "\n";
	std::cout << "Base:" << base << "\n";
	std::cout << "Current:" << current << "\n";
	std::cout << "Max:" << max << "\n";
}; //end display()
