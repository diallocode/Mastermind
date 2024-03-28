

main: main.o chevilles.o chargement_sequence.o verification.o saisieUser.o game.o
	gcc -g main.o game.o chevilles.o chargement_sequence.o verification.o saisieUser.o -o main

main.o: main.c ../Header/chargement_sequence.h ../Header/game.h
	gcc -c -Wall main.c -o main.o

game.o: game.c ../Header/chevilles.h ../Header/game.h ../Header/saisieUser.h
	gcc -c -Wall game.c -o game.o

chevilles.o: chevilles.c ../Header/chevilles.h
	gcc -c -Wall chevilles.c -o chevilles.o

chargement_sequence.o: chargement_sequence.c ../Header/chargement_sequence.h ../Header/verification.h
	gcc -c -Wall chargement_sequence.c -o chargement_sequence.o

verification.o: verification.c ../Header/verification.h
	gcc -c -Wall verification.c -o verification.o

saisieUser.o: saisieUser.c ../Header/saisieUser.h ../Header/verification.h
	gcc -c -Wall saisieUser.c -o saisieUser.o

clean:
	rm -rf *.o main