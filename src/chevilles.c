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

    // Tableaux pour marquer les éléments déjà comptés pour la brocheNoir
    bool compteSecret[4] = {false};
    bool compteSequence[4] = {false};

    // Marquer les correspondances exactes pour ne pas les recompter
    for (int i = 0; i < 4; i++) {
        if (secret[i] == sequence[i]) {
            compteSecret[i] = true;
            compteSequence[i] = true;
        }
    }
    int Blanches = 0;
     // Pour chaque couleur dans secret, voir si elle est dans sequence sans être au même endroit
    for (int i = 0; i < 4; i++) {
        if (!compteSecret[i]) {
            for (int j = 0; j < 4; j++) {
                if (secret[i] == sequence[j] && !compteSequence[j]) {
                    Blanches++;
                    compteSequence[j] = true; // Évite de recompter cette couleur dans sequence
                    break; // Arrête de chercher dès qu'une correspondance est trouvée
                }
            }
        }
    }

    return Blanches;
}
