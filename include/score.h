#ifndef __SCORE_H__
#define __SCORE_H__

#include"../lib/include/color.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define SCORE_MAX 3


typedef struct
{
    char nom[50];
    int score;
}Score;

/**
 * \brief une fonction qui lit les scores depuis le fichier(elle lit maximum 3 scores).
 * \param[in] score Un tableau de score de taille 3.
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
 * \brief une fonction qui sauvegarde un score dans un fichier
 * \param[in] score le score à stocker
*/
void save_score(Score s);

/**
 * \brief Une fonction qui détermine l'index du plus petit score de la liste de score.
 * \param[in] scores un tableau de scores
 * \return index du minimum de score
*/
int index_minimum(Score scores[]);

/**
 * \brief Une fonction qui détermine le minimum de deux nombres
 * \param[in] a un nombre
 * \param[in] b un nombre
 * \return le minimum entre a et b
*/
int minimum(int a, int b);

/**
 * \brief Une fonction qui détermine si l'utilisateur a déjà un score
 * \param[in] score Un tableau de score
 * \param[in] nom le nom de l'utilisateur
 * \return index du prenom de l'utilisateur s'il en esxite et -1 sinon.
*/
int present_user(Score score[], char nom[]);

/**
 * \brief une fonction qui tri des entiers par ordre decroissant (Dans notre cas c'est trier les scores)
 * \param[in] scores liste de scores à trier
 * \param[in] taille le nombre de scores à trier
*/
void bubbleSort(Score scores[], int taille);

#endif