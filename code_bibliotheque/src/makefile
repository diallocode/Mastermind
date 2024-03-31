# le makefile pour généré la bibliothèque

SRC = $(wildcard *.c)
OBJET = $(SRC:.c=.o)
LIBRARY = libcolor.a

$(LIBRARY): $(OBJET)
	ar -crv $@ $^
	ranlib $@

%.o: %.c
	gcc -c $< -o $@

clean:
	rm -rf $(OBJET) $(LIBRARY)
