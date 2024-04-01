#ifndef __VERIFICATION_H 
#define __VERIFICATION_H 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
#include<ctype.h>


bool est_saisie_valide(char sequence_couleurs[], bool niveau);
void smallLetter_to_capitalLetter(char mot_ecret[]);
char saisir_caractere();

/**
 * \brief Une fonction qui utilise la fonction fgets pour saisir une chaine sécurisée depuis le clavier
 * \param[in] sequence une chaine de caractères
 * \param[in] taille nombre de caractères à lire 
 * \return un entier 1 si la saisie a réussit et 0 sinon.
*/
int saisir(char sequence[], int taille);

/**
 * \brief Une fonction qui vérifie si y a des doublons ou pas des couleurs
 * \param[in] sequence_couleurs pointeur vers la chaine à inspecter
 * \return un booléen qui vaut vrai si y a des doublons et faux sinon.
*/
bool double_couleur(char sequence_couleur[]);


#endif