//#include "loadsave.h"
#include "dork.h"
#include "game.h"
#include <fstream>
#include <string>
#include <iostream>
void save(character &a){
ofstream outfile;
outfile.open("Save1.dat");
outfile << a.getName() << " " << a.getLevel() << " " << a.getEnergy() << a.getSteps();
outfile.close();
}

void load(character &a){
	ifstream myfile;
	myfile.open ("Save1.dat");
		if (!myfile){
		cerr<<"Could not open file" << endl;
		exit(1);
			}
	string n,l;
	int e,s;
	myfile >> n >> l >> e >> s;
	a.setName(n);
	a.setLevel(l);
	a.setEnergy(e);
	a.setSteps(s);

	myfile.close();
}
