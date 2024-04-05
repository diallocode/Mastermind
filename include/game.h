#ifndef __GAME_H__
#define __GAME_H__

#include<stdbool.h>
#include"saisieUser.h"
#include"chevilles.h"
#include"chargement_sequence.h"
#include"verification.h"
#include<string.h>

bool game(char secret_sequence[], char user_sequence[], int cheville_blanche[10], int cheville_noire[10], char sequences[10][5], int guesses[10]);

#endif
