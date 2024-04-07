/**
  * \file saisieUser.h
  * \brief Contient le prototype de la fonction qui permet au joueur d'entrez une sequence de couleurs
*/

#ifndef __SAISI_USER__
#define __SAISI_USER__

 
#include <stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


/**
 * \brief Une fonction qui recupere une saisie de l'utilisateur et verifie sa validité.
 * \param [in] niveau un booléen, s'il vaut True --> niveau difficile, sinon niveau facile.
 * \param [in] saisie_user tableau qui va contenir la sequence saisie par le joueur
*/
void saisir_sequence_couleurs(bool niveau, char saisie_user[]);

#endif
