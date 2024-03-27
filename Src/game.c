#include"../Header/game.h"
#include"../Header/saisieUser.h"
#include"../Header/chevilles.h"


bool game(char secret_sequence[], char user_sequence[]){
    int coutRestant = 10;
    int niveau = 0;
    bool mode = false;
    
    // Prevoir de faire une fonction pour une saisie d'un nombre valide
    printf("Choisissez un mode:\n");
    printf("1- Mode facile\n");
    printf("2- Mode dificile\n");
    scanf("%d", &niveau);

    if(niveau == 2)
        mode = true;

    randomSequenceGenerate(secret_sequence, mode);
    
    printf("\nC'est parti vous avez %d essayes.\n", coutRestant);
    while (coutRestant > 0 && brocheNoir(secret_sequence, user_sequence) != 4)
    {
        printf("Il vous reste %d coups.\n", coutRestant);
        saisir_sequence_couleurs(mode, user_sequence);

        if(brocheNoir(secret_sequence, user_sequence) == 0)
            printf("Oups\n");

        else if (brocheNoir(secret_sequence, user_sequence) == 2 || brocheNoir(secret_sequence, user_sequence) == 3)
            printf("Tenez bon vous êtes y presque\n.");
        

        
        printf("Vous avez %d couleurs bien positionnée(s) dans la séquence.\n", brocheNoir(secret_sequence, user_sequence));
        printf("Et\n");
        printf("Vous avez %d couleurs correctes mais mal positionnée(s) dans la séquence.\n", brocheBlanche(secret_sequence, user_sequence));
        coutRestant--;

    }

    return coutRestant > 0;
}
