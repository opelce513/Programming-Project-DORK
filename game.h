#ifndef GAME_H
#define GAME_H 
#include "dork.h"

class character{ 
	private: 
		string name; 
		string level_name; 
		int energy; 
		int steps; 
	public: 
		character();
		void setName(string in_name); 
		string getName(); 
		void printCharacter(); 
	 
};

#endif 
