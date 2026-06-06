#ifndef MENU_H_EXISTS
#define MENU_H_EXISTS

#pragma once

class character_stats {
public:
	void setBase(float newBase);
	float getBase();

	void setCurrent(float newCurrent);
	float getCurrent()

	void setMax(float newMax);
	float getMax();

	void increase(float amount);
	void decrease(float amount);

private:
	float base;
	float current;
	float max;

};

#endif
