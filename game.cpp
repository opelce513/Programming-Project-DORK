#include "game.h"
#include "dork.h"
#include <string> 
#include <stdio.h> 


using namespace std; 

character :: character() : name("unknown"), level_name("Terrestrial"), energy(15), steps(0), locationx(0), locationy(0){
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

int character :: getLocationx(){
return locationx;
}

int character :: getLocationy(){
return locationy;
}

string character :: getLevel(){ 
  return level_name; 
}

void character :: setName(string in_name){ 
	name = in_name; 
} 

void character :: setEnergy(int in_energy){ 
  if (in_energy>30){
  printw("This is your final form!!! Witness me! \n");
	energy=30;
  }
  energy = in_energy; 
} 
void character :: setSteps(int in_steps){ 
  steps = in_steps; 
} 
void character :: setLevel(string in_level){ 
  level_name = in_level; 
} 

void character :: setLocationx(int in_steps){
	locationx=in_steps;
}
		
void character :: setLocationy(int in_steps){
	locationy=in_steps;
}

void character :: printCharacter() { 
	printw("------------------------------------------------------------------------------ \n");
	printw("Hello %s   level: %s \t energy: %i   steps: %i \n", name.c_str(), level_name.c_str(), energy, steps);
	printw("------------------------------------------------------------------------------ \n"); 
}
