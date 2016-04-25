#include "dork.h" 
#include "game.h" 
#include <string> 
#include <stdio.h> 
#include <ctime> 
#include <cstdlib> 


using namespace std; 

void checkpoint(int num, int roll,character& a);

void roll(char user_input,character& a){ 
	if (user_input == 'r'){ 
		int roll_num = ((rand() % 6) + 1); 
		int y = a.getEnergy(); // get the intial 10 energy points
		--y;// subtract 1 energy per roll
		a.setEnergy(y); //set the energy again after subtraction
		a.getEnergy(); //get the energy after the subtraction
		int num=a.getSteps();//get number of steps 
		a.setSteps(num+roll_num);
		checkpoint(num,roll_num,a);
		clearDisplay(1); //clear the display after pressing any button
		a.printCharacter(); //print character with update energy and steps 
		printw("your number of steps is : %i \n", roll_num); 
		printw("Press r to roll the dice, press q to quit: " );
	char x = getch();
	printw("\n");
	roll(x,a); 
	} 
	else if (user_input == 'q'){ 
		printw("you stop the program!congrats start all over\n");
		} 
	else{ 

		printw("You did not press r or q, try again\n"); 
		}
	
}
