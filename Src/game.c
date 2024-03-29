#include"../Header/game.h"


bool game(char secret_sequence[], char user_sequence[]){
    int coutRestant = 10, geuss = 1;
    char niveau = ' ';
    bool mode = false;
    
    // Prevoir de faire une fonction pour une saisie d'un nombre valide
    printf("Choisissez un mode:\n");
    printf("a- Mode facile\n");
    printf("b- Mode dificile\n");

    while (niveau != 'a' && niveau != 'b')
    {
        niveau = tolower(saisir_caractere());
    }

    if(niveau == 'b') 
        mode = true;

    randomSequenceGenerate(secret_sequence, mode);
    
    printf("\nC'est parti vous avez %d essayes.\n", coutRestant);
    
    

    printf("| guess # | guess | result               |\n");
    printf("| ------- | ----- | -------------------- |\n");    
    while (coutRestant > 0 && brocheNoir(secret_sequence, user_sequence) != 4)
    {

        saisir_sequence_couleurs(mode, user_sequence);

        printf("|    %d   | BRYC  | black: %d, white: %d |\n", geuss, brocheNoir(secret_sequence, user_sequence), brocheBlanche(secret_sequence, user_sequence));

        coutRestant--;
        geuss++;
    }

    return coutRestant > 0;
}
