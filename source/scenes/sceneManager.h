#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <unordered_map>
#include <fstream>
#include "scene.h"

class StageManager {
Public:
	void load(); 
		// open file w/ error if unable to
		// json reader?
		// load data into scence.title / .text / etc.
		// 

Private:
	std::unordered_map<std::string, Scene> scenes;
}

#endif 



// render scene and change scene (move) functions somewhere?
//		render will print out all text in appropriate order (load function grabs global variables for proper narrative tree structure), and all possible 'exits as a menu', with options calling the 'move' function and changing the scene / running the load function with a new scene

