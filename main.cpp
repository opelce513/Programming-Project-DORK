/*********************************************************************
 * File: main.cpp
 * Description: Main function which initialize the display and 
 * Introduction.
 * Author: Abhi (adevalap@uncc.edu)
 * University: UNC Charlotte
 * 
 * Copyright (C) 2016, Abhilash Devalapura Rajagopala
 * This program is part of UNC Charlotte course project
 * and is distributed for education purpose only.
 * All commercial rights are reserved by the author on
 * distibution of the game database, custom function , header, ascii art
 * and other related to this game pack.
 * must be properly acknowledge.
 * /
 * *******************************************************************/
#include"dork.h"
#include <iostream> 
#include <string>
#include <stdio.h> 

using namespace std; 

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
int main(int argc, char *argv[])
{
	display_init();
	//intro_display(); 
	clearDisplay(1);
	character a; 
	printw("What is your name?: \n");
	char str[20];
	getstr(str); 
	a.setName(str);
	a.getName();
	a.printCharacter(); 
	getch();
    display_close();
    return 0;
}

