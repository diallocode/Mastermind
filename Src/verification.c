#include"../Header/verification.h"

char saisir_caractere(){
    char c;
    scanf("%c", &c);

    return c;
}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------*/

bool est_saisie_valide(char sequence_couleurs[], bool niveau){

    // si la taille de la séquence est supérieure à 4 alors ce n'est pas une séquence valide
    if(strlen(sequence_couleurs) != 4)
        return false;
    
    for (int i = 0; i < 4; i++)
    {
        // si y a une couleur invalide dans la séquence alors ce n'est pas une séquence valide
        if((sequence_couleurs[i] != 'R' && sequence_couleurs[i] != 'C' && sequence_couleurs[i] != 'Y' 
                    && sequence_couleurs[i] != 'G' && sequence_couleurs[i] != 'B' && sequence_couleurs[i] != 'P'))
            return false;
    }


    if (niveau)    // si c'est niveau difficile, on accepte les doublons de couleurs
        return true;
        
    else{     // sinon (niveau facile), les doublons de couleurs ne sont pas acceptés
            return !double_couleur(sequence_couleurs);
    }
}

/*----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// Cette fonction convertie les caractères minuscules de la sequence_secrète en majuscule 
void smallLetter_to_capitalLetter(char mot_ecret[]){
    int i = 0;
    while(i < 4){
        
        mot_ecret[i] = toupper(mot_ecret[i]); 
        i++;
    }
}

/*----------------------------------------------------------------------------------------------------------------------------------------------------------*/

bool double_couleur(char sequence_couleurs[]){
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (sequence_couleurs[i] == sequence_couleurs[j]) {
                return true; // Deux éléments identiques trouvés, donc c'est un doublon
            }
        }
    }
    return false; // Aucun doublon trouvé
}

