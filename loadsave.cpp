#include "dork.h"
#include "game.h"
#include <fstream>
#include <string>
#include <iostream>
void save(character &a){
ofstream outfile;
outfile.open("Save1.dat");
outfile << a.getName() << endl;
outfile << a.getLevel() << endl;
outfile << a.getEnergy() << endl;
outfile << a.getSteps() << endl;

outfile.close();
}

void load(character &a){
	ifstream myfile;
	myfile.open ("Save1.dat");
		if (!myfile){
		printw("Could not open file \n");
		printw("Please make a new character you be breaking my game bro. Not cool :( \n");
		printw("What is your name?: \n");
		char str[20];
		getstr(str); 
		a.setName(str);
		a.getName();
		a.printCharacter(); 
			}

	string n,l,line;
	int e,s;
	int count=0;
    while (getline(myfile, line)) {
	if (count == 0){
	myfile >> n;
	count++;
	}
	else if (count == 1){
	myfile >> l;
	count++;
	}
	else if (count == 2){
	myfile >> e;
	count++;
	}
	else if (count == 3){
	myfile >> s;
	count++;
	}
	else {
	}
	}
	a.setName(n);
	a.setLevel(l);
	a.setEnergy(e);
	a.setSteps(s);

	myfile.close();
}
