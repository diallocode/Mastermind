#include"../Header/verification.h"

char saisir_caractere(){
    char c;
    scanf("%c", &c);

    return c;
}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------*/

bool est_saisie_valide(char sequence_couleurs[], bool niveau){
    int i = 0;

    // si la taille de la séquence est supérieure à 4 alors ce n'est pas une séquence valide
    if(strlen(sequence_couleurs) > 4)
        return false;
    
    while(sequence_couleurs[i] != '\0'){
        if (niveau)    // si c'est niveau difficile, on accepte les doublons de couleurs
        {
            // si y a une couleur invalide dans la séquence alors ce n'est pas aussi une séquence valide
            if((sequence_couleurs[i] != 'R' && sequence_couleurs[i] != 'C' && sequence_couleurs[i] != 'Y' 
                        && sequence_couleurs[i] != 'G' && sequence_couleurs[i] != 'B' && sequence_couleurs[i] != 'P'))
            return false;
        }
        
        else{     // sinon (niveau facile), les doublons de couleurs ne sont pas acceptés
            // si y a une couleur invalide dans la séquence ou y a des doublons alors ce n'est pas aussi une séquence valide
            if((sequence_couleurs[i] != 'R' && sequence_couleurs[i] != 'C' && sequence_couleurs[i] != 'Y' 
                    && sequence_couleurs[i] != 'G' && sequence_couleurs[i] != 'B' && sequence_couleurs[i] != 'P') || double_couleur(sequence_couleurs))
                return false;
        }

        sequence_couleurs += 1;
    }

    return true;
}

/*----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// Cette fonction convertie les caractères minuscules de la sequence_secrète en majuscule 
void smallLetter_to_capitalLetter(char mot_ecret[]){
    int i = 0;
    while(i < 4){
        
        mot_ecret[i] = mot_ecret[i] - 32; 
        i++;
    }
}

/*----------------------------------------------------------------------------------------------------------------------------------------------------------*/

bool double_couleur(char sequence_couleurs[]){
    int compteur = 0;

    for (int i = 0; i < 4; i++)
    {
        compteur = 0;
        for (int j = 0; j < 4; j++)
        {
            if(sequence_couleurs[i] == sequence_couleurs[j])        
                compteur ++;
        }
        if(compteur > 1)
            return true;

    }
    
    return false;
}

