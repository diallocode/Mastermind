#ifndef __VERIFICATION_H 
#define __VERIFICATION_H 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>


bool est_saisie_valide(char sequence_couleurs[], bool niveau);
void smallLetter_to_capitalLetter(char mot_ecret[]);
char saisir_caractere();

/**
 * \brief Une fonction qui vérifie si y a des doublons ou pas des couleurs
 * \param[in] sequence_couleurs pointeur vers la chaine à inspecter
 * \return un booléen qui vaut vrai si y a des doublons et faux sinon.
*/
bool double_couleur(char sequence_couleur[]);


#endif