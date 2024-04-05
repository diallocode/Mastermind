#ifndef __GAME_H__
#define __GAME_H__

#include<stdbool.h>
#include"saisieUser.h"
#include"chevilles.h"
#include"chargement_sequence.h"
#include"verification.h"
#include<string.h>
#include "score.h"

bool game(char secret_sequence[], char user_sequence[]);

#endif
