#include "dork.h"
#include "game.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void save(character& a);
void checkpoint(int num, int roll,character& a){
for(int i=25; i<200; i+=25){
   if (((num+roll)>=i)&&((num<i))){
	save(a);
	}
    else {
    printw("Something went wrong \n");
    }
}
}
