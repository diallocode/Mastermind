/**
 * \file verification.h
 * \brief Contient les prototypes des fonctions qui permettent de verifier la validité d'une sequence de couleur
*/

#ifndef __VERIFICATION_H 
#define __VERIFICATION_H 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
#include<ctype.h>

/**
 * \brief fonction qui verifie si une la sequence saisie par un joueur est valide
 * \param [in] sequence_couleurs tableau qui contient la sequence saisie par un joueur
 * \param [in] niveau booléen, indique le niveau du jeu (true->difficile && false->facile)
 * \return Retourne le niveau du jeu
*/
bool est_saisie_valide(char sequence_couleurs[], bool niveau);

/**
 * \brief Fonction qui converti en majuscule tous les charactères saisie par un joueur ou chargé depuis un fichier
 * \param [in] mot_secret tableau qui contient la sequence a convertir 
*/
void smallLetter_to_capitalLetter(char mot_ecret[]);

/**
 * \brief Fonction qui permet au joueur de saisir un caractère pour choisir une option
 * \return Retourne le caractère saisie par le joueur
*/
char saisir_caractere();

/**
 * \brief Une fonction qui permet au joueur de saisir une sequence de couleurs
 * \param[in] sequence une chaine de caractères
 * \param[in] taille nombre de caractères à lire 
 * \return un entier 1 si la saisie a réussit et 0 sinon.
*/
int saisir(char sequence[], int taille);

/**
 * \brief Une fonction qui vérifie si y a des doublons ou pas des couleurs dans une sequence de couleurs
 * \param[in] sequence_couleurs sequence de couleurs à verifier
 * \return un booléen qui vaut true si y a des doublons et false sinon.
*/
bool double_couleur(char sequence_couleur[]);


#endif