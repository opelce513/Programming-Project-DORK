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
		void setLevel(string in_level); 
		void setEnergy(int in_energy); 
		void setSteps(int in_steps); 
		string getName(); 
		string getLevel();
		int getEnergy();
		int getSteps();
		void printCharacter(); 
	 
};

#endif 
