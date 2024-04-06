/**
 * \file color.c
 * \brief Contient le code source de la bibliothèque
*/

#include"../include/color.h"

void print_color_text(char text[], char color){
    if(color == 'R') // rouge
        printf("%s%s%s", ANSI_COLOR_RED, text, ANSI_COLOR_RESET);
    else if(color == 'G')
        printf("%s%s%s", ANSI_COLOR_GREEN, text, ANSI_COLOR_RESET);
    else if(color == 'Y')
        printf("%s%s%s", ANSI_COLOR_YELLOW, text, ANSI_COLOR_RESET);
    else if(color == 'B')
        printf("%s%s%s", ANSI_COLOR_BLUE, text, ANSI_COLOR_RESET);
    else if(color == 'P')
        printf("%s%s%s", ANSI_COLOR_MAGENTA, text, ANSI_COLOR_RESET);
    else if(color == 'C')
        printf("%s%s%s", ANSI_COLOR_CYAN, text, ANSI_COLOR_RESET);
    else
        printf("Couleur demandée n'es pas prise en compte\n");
}

