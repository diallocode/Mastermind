#include "decoration.h"

// Sans couleur
void decoreApp1(){
    printf("------------------------------------------------------------------------------------------------\n");
    printf("M     M  AAAAA  SSSSS  TTTTT  EEEEE  RRRR   M   M  III  N   N  DDDD\n");
    printf("MM   MM  A   A  S        T    E      R   R  MM MM   I   NN  N  D   D\n");
    printf("M M M M  AAAAA  SSSSS    T    EEEE   RRRR   M M M   I   N N N  D   D\n");
    printf("M  M  M  A   A      S    T    E      R R    M   M   I   N  NN  D   D\n");
    printf("M     M  A   A  SSSSS    T    EEEEE  R  RR  M   M  III  N   N  DDDD\n");
    printf("------------------------------------------------------------------------------------------------\n");
}

// Avec Couleur
void decoreApp2(){
    // Début du texte en rouge
    printf("------------------------------------------------------------------------------------------------\n");
    printf("\033[0;31m");
    printf("M     M  AAAAA  SSSSS  TTTTT  EEEEE  RRRR   M   M  III  N   N  DDDD\n");
    printf("\033[0;33m");
    printf("MM   MM  A   A  S        T    E      R   R  MM MM   I   NN  N  D   D\n");
    printf("\033[0;34m");
    printf("M M M M  AAAAA  SSSSS    T    EEEE   RRRR   M M M   I   N N N  D   D\n");
    printf("\033[0;36m");
    printf("M  M  M  A   A      S    T    E      R R    M   M   I   N  NN  D   D\n");
    printf("\033[0;32m");
    printf("M     M  A   A  SSSSS    T    EEEEE  R  RR  M   M  III  N   N  DDDD\n");
    printf("\033[0;31m");
    // Réinitialiser la couleur à la normale
    printf("\033[0m");
    printf("------------------------------------------------------------------------------------------------\n");
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