/**
 * \file score.h
 * \brief Contient les prototypes des fonctions qui permettent de gerer le score d'un joueur
*/

#ifndef __SCORE_H__
#define __SCORE_H__

#include"../lib/include/color.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define SCORE_MAX 3


typedef struct
{
    /**
     * Le nom d'un joueur
    */
    char nom[50];
    /**
     * Le score du joueur
    */
    int score;
}Score;

/**
 * \brief une fonction qui lit les scores depuis le fichier(elle lit maximum 3 scores).
 * \param[in] score Un tableau de score de taille 3 ( c'est-à dire elle ne peut contenir que trois differentes score a la fois).
 * \return nombre de scores lit.
*/
int lire_score(Score score[]);

/**
 * \brief une fonction qui affiche les scores
 * \param[in] score un tableau de score à afficher
 * \param[in] taille le nombre de score à afficher
*/
void print_score(Score score[], int taille);

/**
 * \brief une fonction qui enregistre le score d'un joueur dans le fichier ou le met a jour s'il a déjà un score
 * \param[in] score le score à enregistré
*/
void save_score(Score s);

/**
 * \brief Une fonction qui détermine le score le plus petit de la liste de score.
 * \param[in] scores un tableau de scores
 * \return minimum des score
*/
int minimum_score(Score scores[]);

/**
 * \brief Une fonction qui détermine le minimum de deux nombres
 * \param[in] a un nombre
 * \param[in] b un nombre
 * \return le minimum entre a et b
*/
int minimum(int a, int b);

/**
 * \brief Une fonction qui détermine si un joueur a déjà un score 
 * \param[in] score Un tableau de score
 * \param[in] nom le nom de l'utilisateur
 * \return retourne l'index du score de l'utilisateur s'il esxite et -1 sinon.
*/
int present_user(Score score[], char nom[]);

/**
 * \brief une fonction qui tri les scores par ordre decroissant
 * \param[in] scores liste de scores à trier
 * \param[in] taille la taille de la liste de scores à trier
*/
void bubbleSort(Score scores[], int taille);

#endif