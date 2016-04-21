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

void setLevel(string in_level){
	level_name=in_level;
}

void setEnergy(int in_energy){
	energy=in_energy;
}

void setSteps(int in_steps){
	steps=in_steps;
} 

string character::getName(){ 
	return name; 
} 

string character::getLevel(){
	return level_name;
}

int character::getEnergy(){
	return energy;
}

int character::getSteps(){
	return steps;
}

void character :: printCharacter() { 
printw("------------------------------------------------------------------------------ \n");
printw("Hello %s   level: %s \t energy: %i   steps: %i \n", name.c_str(), level_name.c_str(), energy, steps);
printw("------------------------------------------------------------------------------ \n"); 
}

