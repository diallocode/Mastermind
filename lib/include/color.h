/**
 * \file color.h
 * \brief Contient le prototype de la bibliothèque
*/

#ifndef __COULEURS_
#define __COULEURS_

/**
 * \brief Fonction de la bibliothèque de couleur
 * \param [in] text Chaine de caractère a mettre en couleur
 * \param [in] color Un caractère indiquant la couleur souhaitée en majuscule
 * \pre couleur = R || 'C' || 'Y' || 'G' || 'B' || 'P'
*/
void print_color_text(char text[], char color);

#endif