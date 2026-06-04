game: main.o menu.o
	g++ main.o menu.o -o game

main.o: main.cpp menu.h
	g++ -c main.cpp

menu.o: menu.cpp menu.h
	g++ -c menu.cpp

run: game
	./game

clean:
	rm *.o game
