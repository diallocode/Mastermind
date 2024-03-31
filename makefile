CC = gcc
CFLAGS = -Wall -Iinclude
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
EXECUTABLE = $(BIN_DIR)/main

# Définir les répertoires dans lesquels Make doit rechercher les fichiers sources
vpath %.c $(SRC_DIR)

# Liste de tous les fichiers source
SRCS = $(notdir $(wildcard $(SRC_DIR)/*.c))

# Création des noms de fichiers objets correspondants
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS) | $(BIN_DIR)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -rf $(OBJ_DIR)/*.o $(BIN_DIR)/main

