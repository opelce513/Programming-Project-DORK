#include "dork.h'
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
	ifstream myfile	
	myfile.open ("Save1.dat");
	if (!myfile){
		cerr<<"Could not open file" << endl;
		return -1;
	}
	string n,l;
	int e,s;
	myfile >> n >> endl;
	myfile >> l >> endl;
	myfile >> e >> endl;
	myfile >> s >> endl;
		a.setName(n);
		a.setLevel(l);
		a.setEnergy(e);
		a.setSteps(s);
		
	myfile.close();
}
