#include "dork.h"
#include "game.h"
#include <string>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
#include <fstream> 
using namespace std;
void checkpoint(int num, int roll,character& a);

void roll(char user_input,character &a){
	if (user_input == 'r'){
		int roll_num = ((rand() % 6) + 1);
		int y = a.getEnergy(); // get the intial 10 energy points
		--y;// subtract 1 energy per roll
		a.setEnergy(y); //set the energy again after subtraction
		a.getEnergy(); //get the energy after the subtraction
		int num=a.getSteps();//get number of steps
		a.setSteps(num+roll_num);
		checkpoint(num,roll_num,a);// call on checkpoint function
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
void events(){ 
	ifstream myfile; 
	myfile.open("events.txt"); 
	if (!myfile){ 
		printw("FILE NOT FOUND !!!\n"); 
	} 
	else{ 
		string event[22701];
		int xpos[22701];
		int ypos[22701];
		
		for(string line; getline(myfile,line);){ 
			string findCarrot = line; 
			int length = strlen(findCarrot.c_str()); 
			char carrot = '^'; 
			char comma = ',';
			int pos[6] = {0,0,0,0,0,0}; 
			int count=0;
			for (int i = 0; i < length; i++){				
				if(findCarrot[i]=='^'){ 
					pos[count]=i;
				 	printw("%i \n", pos[count]);// for testing purposes
					count++;
				}
			}
			string a=findCarrot.substr(0,pos[0]);
			string b=findCarrot.substr(pos[0]+1,(pos[1]-pos[0]-1));
			string c=findCarrot.substr(pos[1]+1,(pos[2]-pos[1]-1));
			string d=findCarrot.substr(pos[2]+1,(pos[3]-pos[2]-1));
			string e=findCarrot.substr(pos[3]+1,(pos[4]-pos[3]-1));
			string f=findCarrot.substr(pos[4]+1,(pos[5]-pos[4]-1));
			int length2=strlen(a.c_str());
			int count2=0;
			for (int i=0; i < length2; i++){
				if(a[i]==comma){
					count2=i;
				}
			}
			string a1=a.substr(0,count2);
			string a2=a.substr(count2+1,length2-count2-1);
			string e1=e.substr(0,count2);
			string e2=e.substr(count2+1,length2-count2-1);
			//printw("%s \n %s % s\n", a.c_str(),a1.c_str(),a2.c_str()); //for testing purposes
			//printw("%s \n %s % s\n", e.c_str(),e1.c_str(),e2.c_str()); //for testing purposes
			//printw("%s \n %s \n %s \n %s \n %s \n %s ", a.c_str(),b.c_str(),c.c_str(),d.c_str(),e.c_str(),f.c_str());// For testing 			purposes
				
			break;// for testing purposes
	}
}
}
