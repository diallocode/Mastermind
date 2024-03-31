#ifndef __COLOR_H__
#define __COLOR_H__

/**
 * \brief des codes ANSI pour les couleurs
 */

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#include <stdio.h>

/**
 * \brief fonction permettant d'afficher un texte en une couleur passée en paramètre
 * \param[in] text texte à afficher
 * \param[in] color la couleur(un initial d'une couleur)
 * 
 * \pre couleur = R || 'C' || 'Y' || 'G' || 'B' || 'P'
*/
void print_color_text(char text[], char color);

#endif