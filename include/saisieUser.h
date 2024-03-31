/**
 * \file saisi_utilisateur.h
*/

#ifndef __SAISI_USER__
#define __SAISI_USER__

 
#include <stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


/**
 * \brief Une fonction qui fait appel est_saisie_valide et double_couleur recuperer une saisie valide de l'utilisateur.
 * \param niveau un booléen, s'il vaut True --> niveau difficile, sinon niveau facile.
 * \return pointeur vers la chaine saisie par l'utilisateur.
 * \pre ??
*/
void saisir_sequence_couleurs(bool niveau, char saisie_user[]);

#endif
