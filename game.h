#ifndef GAME_H
#define GAME_H 
#include "dork.h"

class character{ 
	private: 
		string name; 
		string level_name; 
		int energy; 
		int steps; 
		int locationx;
		int locationy;
	public: 
		character();
		void setName(string in_name); 
		string getName(); 
		void printCharacter(); 
		int getEnergy();
		int getSteps();
		string getLevel();
		int getLocationx();
		int getLocationy();
		void setSteps(int in_steps); 
		void setEnergy(int in_energy);
		void setLevel(string in_level);
		void setLocationx(int in_steps);
		void setLocationy(int in_steps);
		};

#endif 
