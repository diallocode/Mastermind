/**
 * \file game.h
 * \brief Contient le prototype de la fonction qui permet de lancer une partie du jeu mastermind
*/

#ifndef __GAME_H__
#define __GAME_H__

#include<stdbool.h>
#include"saisieUser.h"
#include"chevilles.h"
#include"chargement_sequence.h"
#include"verification.h"
#include<string.h>
#include "score.h"

/**
 * \brief La fonction qui permet de lancer le jeu mastermind et determine si y'a victoire ou non
 * \param [in] secret_sequence tableau qui va contenir la sequence secrete
 * \param [in] user_sequence tableau qui va contenir la sequence entré par le joueur
 * \return Retourne un booléen qui vaut true si le joueur a gagné et false sinon
*/
bool game(char secret_sequence[], char user_sequence[]);

#endif
