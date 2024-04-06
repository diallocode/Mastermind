/**
 * \file decoration.c
 * \brief Contient le code de la fonction de decoration
*/

#include "decoration.h"

// Sans couleur
void decoreApp(){
     print_color_text("------------------------------------------------------------------------------------------------\n",'R');
     print_color_text("M     M  AAAAA  SSSSS  TTTTT  EEEEE  RRRR   M   M  III  N   N  DDDD\n",'B');
     print_color_text("MM   MM  A   A  S        T    E      R   R  MM MM   I   NN  N  D   D\n",'Y');
     print_color_text("M M M M  AAAAA  SSSSS    T    EEEE   RRRR   M M M   I   N N N  D   D\n",'C');
     print_color_text("M  M  M  A   A      S    T    E      R R    M   M   I   N  NN  D   D\n",'G');
     print_color_text("M     M  A   A  SSSSS    T    EEEEE  R  RR  M   M  III  N   N  DDDD\n",'P');
     print_color_text("------------------------------------------------------------------------------------------------\n",'R');
}

// Le code des couleurs
/* 
    Noir: \033[0;30m
    Rouge: \033[0;31m
    Vert: \033[0;32m
    Jaune: \033[0;33m
    Bleu: \033[0;34m
    Magenta: \033[0;35m
    Cyan: \033[0;36m
    Blanc: \033[0;37m
*/