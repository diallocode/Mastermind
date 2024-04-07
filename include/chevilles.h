/**
 * \file chevilles.h
 * \brief Contient les prototype des fonctions chevilles(blanches et noirs)
*/

#ifndef __CHEVILLE_
#define __CHEVILLE_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * \brief Retourne le nombre de couleur présente et bien placée
 * \param [in] secret tableau qui contient la sequence secret
 * \param [in] sequence tableau qui contient la sequence entrez par le joueur
 * \return Le nombre de couleur presente et bien placés
*/
int brocheNoir(char ser[], char sequence[]);

/**
 * \brief Retourne le Nombre de couleurs présentes dans la séquence mais mal placées
 * \param [in] secret tableau qui contient la sequence secret
 * \param [in] sequence tableau qui contient la sequence entrez par le joueur
 * \return Entier Le nombre de couleur presente mais mal placés
*/
int brocheBlanche(char secret[], char sequence[]);


#endif