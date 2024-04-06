/**
 * \file chevilles.c
 * \brief Contient les codes des fonctions chevilles(blanches et noirs)
*/

#include "chevilles.h"


// Nombres de couleurs correctes ET bien placées 
int brocheNoir(char secret[], char sequence[]){
    int Noirs = 0;
    int i = 0;
    while(i < 4){
        if(secret[i] == sequence[i]){
            Noirs++;
        }
        i++;
    }
    return Noirs;
}

/*--------------------------------------------------------------------*/

// Nombre de couleurs présentes dans la séquence mais mal placées
int brocheBlanche(char secret[], char sequence[]){
    if(brocheNoir(secret, sequence) == 4)
        return 0;
        
    int Blanches = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(secret[i]  == sequence[j] && i != j)
                Blanches++;
        }
    }
    return Blanches;
}