/**
 * \file main.c
 * \brief Contient la fonction principale de la bibliothèque
*/

#include"../include/color.h"


//fonction principale, pour tester la bibliothèque
int main() {
    // Impression du texte en différentes couleurs
    print_color_text("Rouge\n", 'R');
    print_color_text("Vert\n", 'G');
    print_color_text("Jaune\n", 'Y');
    print_color_text("Bleu\n", 'B');
    print_color_text("Violet\n", 'P');
    print_color_text("Cyan\n", 'C');

    return 0;
}

