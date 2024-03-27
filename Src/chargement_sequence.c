#include "../Header/chargement_sequence.h"
#include"../Header/verification.h"


// version simplifié qui permet juste de lire une combinaison sur la 1ère ligne du fichier
void chargeSequenceFromFile(char secret_sequence[]){
    
    // Read
    FILE *file = fopen("/home/mamadou/Bureau/tech_dev/Master_Mind/techdev-mastermind-tanou_ahamat/Src/secret_sequence.txt", "r");
    if (file == NULL)
    {
        printf("Erreur: L'ouverture du fichier n'a pas reussi.\n");
    }
    
    // Write and save
    int items_read = fscanf(file, "%s", secret_sequence);
    if (items_read == 1)
    {
        printf("Read successfully\n");   
    }
    else
    {
        printf("Error: lecture du fichier impossible.\n");
        exit(1);
    }
    // Close of file
    fclose(file);
}

void randomSequenceGenerate(char secret_sequence[], bool niveau){
    char liste_couleurs[6] = {'R', 'C', 'Y', 'G', 'B', 'P'};
    

     // Generer une sequence de couleur initiale
    for (int i = 0; i < 4; i++)
        secret_sequence[i] = liste_couleurs[random_index()];

    //Et si c'est niveau facile, alors on fait en sorte qu'il ait pas des doublons dans la sequence
    if(!niveau){
        while (double_couleur(secret_sequence))
        {
            for (int i = 0; i < 4; i++)
            secret_sequence[i] = liste_couleurs[random_index()];
        }
        
    }

}

int random_index(){
    return rand() % 6; // Génère un nombre entre 0 et 6
}
