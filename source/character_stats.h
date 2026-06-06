#ifndef MENU_H_EXISTS
#define MENU_H_EXISTS

#include <string>

class character_stats {
private:
	double base;
	double current;
	double max;
	std::string label;


public:
	character_stats(const std::string& label = "Unnamed", 
			double base = 1.0, 
			double current = 2.0, 
			double max = 3.0);

	void setBase(double newBase);
	double getBase();

	void setCurrent(double newCurrent);
	double getCurrent();

	void setMax(double newMax);
	double getMax();

	void increase(double amount);
	void decrease(double amount);

	void display(); //debugging
};

#endif
