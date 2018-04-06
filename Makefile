output.o: main.o tda.o clase2.o
	g++ main.o tda.o clase2.o -o output

main.o: main.cpp tda.h clase2.h
	g++ -c main.cpp

tda.o: tda.cpp tda.h clase2.h
	g++ -c tda.cpp

clase2.o: clase2.h clase2.cpp
	g++ -c clase2.cpp
