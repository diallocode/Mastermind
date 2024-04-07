/**
 * \file chargement_sequence.h
 * \brief Contient les prototypes des fonctions qui permettent d'obtenir une sequence secrete
*/

#ifndef __READSEQUENCETOFILE_H 
#define __READSEQUENCETOFILE_H 

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<stdbool.h>
#include"verification.h"
// tableau contenant la sequence secrète chargé depuis le fichier

/**
 * \brief Chargé une sequence valide a partir d'un fichier
 * \param[in] secret_sequence tableau pour charger la sequence lu depuis le fichier
 * \param[in] niveau Un booléen qui représente le niveau du jeu(True->difficile && False->facile)
*/
void chargeSequenceFromFile(char secret_sequence[], bool niveau);

/**
 * \brief Generation automatique d'une sequence de couleur secrete
 * \param[in] secret_sequence contient la sequence genérée
 * \param[in] niveau booléen representant le niveau du jeu 
*/
void randomSequenceGenerate(char secret_sequence[], bool niveau);

/**
 * \brief Retourne un nombre aléatoire entre 0 et 6
 * \param[out] entier un entier naturel inferieur 6
*/
int random_index();

/**
 * \brief Une fonction qui compte le nombre de séquence dans un fichhier
 * \return le nombre de séquence dans le fichier
*/
int nomber_sequence_in_file();

#endif