CC = gcc
CFLAGS = -Wall -Iinclude
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
EXECUTABLE = $(BIN_DIR)/executable

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

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)


