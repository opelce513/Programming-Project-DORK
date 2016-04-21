#include "game.h"
#include "dork.h"
#include <string> 
#include <stdio.h> 


using namespace std; 

character :: character() : name("unknown"), level_name("terratorial"), energy(10), steps(0){
}
void character :: setName(string in_name){ 
	name = in_name; 
} 
string character :: getName(){ 
	return name; 
}
int  character :: getEnergy(){ 
  return energy; 
} 
int character :: getSteps(){ 
  return steps; 
}
void character :: setEnergy(int in_energy){ 
  energy = in_energy; 
} 
void character :: setSteps(int in_steps){ 
  steps = in_steps; 
} 
void character :: setLevel(string in_level){ 
  level_name = in_level; 
} 
string character :: getLevel(){ 
  return level_name; 
}
void character :: printCharacter() { 
	printw("------------------------------------------------------------------------------ \n");
	printw("Hello %s   level: %s \t energy: %i   steps: %i \n", name.c_str(), level_name.c_str(), energy, steps);
	printw("------------------------------------------------------------------------------ \n"); 
}
