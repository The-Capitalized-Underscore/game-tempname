#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <string>
#include <unordered_map>
#include <vector>

struct Scene {
	std::string title;
	std::string text;
	std::unordered_map <std::string, std::string> paths;
	std::vector <std::string> items;
}

#endif 
