resu: display.o main.o game.o play.o loadsave.o
	g++  display.o main.o game.o play.o loadsave.o -o resu -lncurses
	

display.o: display.cpp
	g++ -c -std=c++11 display.cpp -lncurses
main.o: main.cpp
	g++ -c -std=c++11 main.cpp -lncurses
game.o: game.cpp 
	g++ -c -std=c++11 game.cpp -lncurses
play.o: play.cpp 
	g++ -c -std=c++11 play.cpp -lncurses
loadsave.o: loadsave.cpp 
	g++ -c -std=c++11 loadsave.cpp -lncurses
run:
	./resu
clean:
	rm -f resu
	rm -f *.o
dclean:
	rm -f *.dat
