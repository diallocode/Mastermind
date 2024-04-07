/**
 * \file chargement_sequence.c
 * \brief Contient les codes des fonctions qui permettent d'obtenir une sequence secrete
*/

#include "chargement_sequence.h"
#include"verification.h"


void chargeSequenceFromFile(char secret_sequence[], bool niveau) {
    static int compteur = 1;
    int nombre_sequence = nomber_sequence_in_file(); // nombre de séquence de couleurs dans le fichier secret_sequence.txt

    FILE *file = fopen("/home/mahamat/COurs/S3/TEC_DEV/projet_master_mind/techdev-mastermind-tanou_ahamat/src/secret_sequence.txt", "r");
    if (file == NULL) {
        printf("Erreur: L'ouverture du fichier n'a pas réussi.\n");
        exit(0);
    }
    
    
    // mettre à jour les séquence dans le fichier(Pour éviter de lire à chaque fois la même sequence de couleurs)
    // Le principe c'est de lire à chaque fois la séquence suivante
    int i = 1;
    while (i <= compteur)
    {
        fscanf(file, "%s", secret_sequence);
        i++;
    }

    // si notre compteur == au nombre de sequence dans le fichier, alors il faut repartir du début.
    compteur ++;
    if(compteur == nombre_sequence)
        compteur = 1;
    
    // on lit le fichier tant que la séquence lue est invalide
    while (fscanf(file, "%s", secret_sequence) == 1) {
        if (est_saisie_valide(secret_sequence, niveau)) {
            fclose(file);
            return;
        }
        else
            compteur ++;
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

    //Et si c'est niveau facile, alors on fait en sorte qu'il n'ait pas des doublons dans la sequence
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

int nomber_sequence_in_file(){
    int nombre_sequence = 0;
    char secret_sequence[10];
    FILE *file = fopen("src/secret_sequence.txt", "r");
    if(file == NULL){
        printf("Erreur: L'ouverture du fichier à échouer\n");
        exit(EXIT_FAILURE);
    }

    while (fscanf(file, "%5s", secret_sequence) == 1)
        nombre_sequence++;
    
    fclose(file);
    return nombre_sequence;
}
