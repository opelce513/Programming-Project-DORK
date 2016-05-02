#include "dork.h"
#include "game.h"
#include <fstream>
#include <string>
#include <iostream>

void save(character& a){
ofstream outfile;
outfile.open("Save1.dat");
outfile << a.getName() << endl;
outfile << a.getLevel() << endl;
outfile << a.getEnergy() << endl;
outfile << a.getSteps() << endl;
outfile << a.getLocationx() << endl;
outfile << a.getLocationy() << endl;

outfile.close();
}

void load(character& a){
	ifstream myfile;
	myfile.open ("Save1.dat");
	if (!myfile){
	printw("Could not open file \n");
	}
	else {
	string n,l;
	int e,s;
	int count=0;
	string temp[6];
   	for (string line;getline(myfile,line);) {
	temp[count]=line;	
	count++;
	//clearDisplay(1);
	//printw("%s\n",temp[count-1].c_str());
	//getch();	
	}
	a.setName(temp[0]);
	a.setLevel(temp[1]);
	a.setEnergy(atoi(temp[2].c_str()));
	a.setSteps(atoi(temp[3].c_str()));
	a.setLocationx(atoi(temp[4].c_str()));
	a.setLocationy(atoi(temp[5].c_str()));
	}
	myfile.close();
}
