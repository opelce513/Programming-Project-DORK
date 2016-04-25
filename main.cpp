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
#include"game.h" 
#include <iostream> 
#include <string>
#include <stdio.h> 
#include <cstdlib> 
#include <ctime> 

using namespace std; 


void load(character& a);
void roll(char user_input, character& a); 
int main(int argc, char *argv[])
{
	srand(time(NULL)); 
	display_init();
	//intro_display(); 
	clearDisplay(1);
	character a; 
	
	printw("Do you want to create a Newgame 'n' or Loadgame 'l'?:" ); 
	
	char z = getch();
	if (z == 'l'){
		load(a);
		getch();		
		clearDisplay(1);
		a.printCharacter(); 
	}
	else if (z=='n'){
	printw("\nWhat is your name?: \n");
	char str[20];
	getstr(str); 
	a.setName(str);
	a.getName();
	clearDisplay(1);
	a.printCharacter(); 
	}
	else 
	{
		printw("Press l or n");
		return -1;
	}

	printw("Press r to roll the dice, press q to quit: " );
	char x=getch(); 
	printw("\n"); 
	roll(x,a); 
  
	getch();
    display_close();
    return 0;
}
