main.o: main.cpp
	g++ -c main.cpp

game: main.o
	g++ main.o -o game

run: game
	./game

clean:
	rm *.o game
