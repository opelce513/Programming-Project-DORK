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
void character :: printCharacter() { 
	printw("------------------------------------------------------------------------------ \n");
	printw("Hello %s   level: %s \t energy: %i   steps: %i \n", name.c_str(), level_name.c_str(), energy, steps);
	printw("------------------------------------------------------------------------------ \n"); 
}
