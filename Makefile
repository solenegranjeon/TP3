all: main

main: test_polymorph.o Yoshi.o Character.o
	g++ test_polymorph.o Yoshi.o Character.o -o main -g
	
test_polymorph.o: test_polymorph.cpp Yoshi.h Character.h
	g++ -c test_polymorph.cpp -o test_polymorph.o -std=c++11 -g

Yoshi.o: Yoshi.cpp Yoshi.h Character.h
	g++ -c Yoshi.cpp -o Yoshi.o -std=c++11 -g
	
Character.o: Character.cpp  Character.h
	g++ -c Character.cpp -o Character.o -std=c++11 -g
 
clean:
	rm *.o

