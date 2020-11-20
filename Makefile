run: compile
	./execute

compile: mainProjet.cpp Sommet.o ArbreB.o
	g++ -g -o execute mainProjet.cpp Sommet.o ArbreB.o

Sommet.o: Sommet.hpp Sommet.cpp
	g++ -c Sommet.cpp

ArbreB.o: ArbreB.hpp ArbreB.cpp
	g++ -c ArbreB.cpp

clean: 
	rm -f *.o execute