/**
 * \file chargement_sequence.c
 * \brief Contient les codes des fonctions qui permettent d'obtenir une sequence secrete
*/

#include "chargement_sequence.h"
#include"verification.h"


void chargeSequenceFromFile(char secret_sequence[], bool niveau) {
    FILE *file = fopen("/home/mahamat/COurs/S3/TEC_DEV/projet_master_mind/techdev-mastermind-tanou_ahamat/src/secret_sequence.txt", "r");
    if (file == NULL) {
        printf("Erreur: L'ouverture du fichier n'a pas réussi.\n");
        exit(0);
    }
    
    while (fscanf(file, "%s", secret_sequence) == 1) {
        printf("Read successfully\n");
        if (est_saisie_valide(secret_sequence, niveau)) {
            fclose(file);
            return;
        }
    }

    if (feof(file)) {
        printf("La fin du fichier a été atteinte sans trouver une séquence valide.\n");
        fclose(file);
        exit(1);
    } else {
        printf("Erreur: lecture du fichier impossible.\n");
    }

    fclose(file);
}

/*----------------------------------------------------------------------------------------------------------------------------------------*/
void randomSequenceGenerate(char secret_sequence[], bool niveau){
    char liste_couleurs[6] = {'R', 'C', 'Y', 'G', 'B', 'P'};
    
     // Generer une sequence de couleur initiale
    for (int i = 0; i < 4; i++)
        secret_sequence[i] = liste_couleurs[random_index()];

    secret_sequence[4] = '\0'; // On est sûr que notre sequece comporte 4 couleurs et non plus.

    //Et si c'est niveau facile, alors on fait en sorte qu'il ait pas des doublons dans la sequence
    if(!niveau){
        while (double_couleur(secret_sequence))
        {
            for (int i = 0; i < 4; i++)
                secret_sequence[i] = liste_couleurs[random_index()];
        }
        
    }

}

/*----------------------------------------------------------------------------------------------------------------------------------------*/

int random_index(){
    return rand() % 6; // Génère un nombre entre 0 et 5
}
