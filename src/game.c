#include"game.h"
#include"../lib/include/color.h"


bool game(char secret_sequence[], char user_sequence[], int cheville_blanche[10], int cheville_noire[10], char sequences[10][5], int geusses[10]){
    int coutRestant = 10, guess = 1;
    char niveau = ' ';
    bool mode = false;
    char solo_duel = ' ';
    
    // Prevoir de faire une fonction pour une saisie d'un nombre valide
    printf("Choisissez un mode:\n");
    printf("a- Mode facile\n");
    printf("b- Mode dificile\n");

    while (niveau != 'a' && niveau != 'b')
    {
        niveau = tolower(saisir_caractere());
        if(niveau != 'a' && niveau != 'b')
            print_color_text("\nVeuillez saisir a ou b\n", 'R');
    }

    if(niveau == 'b') 
        mode = true;

    printf("\nVoulez vous jouer en solo ou en duel:\n");
    printf("a- en solo\n");
    printf("b- en duel\n");
    while (solo_duel != 'a' && solo_duel != 'b')
    {
        solo_duel = tolower(saisir_caractere());
        if(solo_duel != 'a' && solo_duel != 'b')
            print_color_text("\nVeuillez saisir a ou b\n", 'R');
    }

    if(solo_duel == 'b') // si on veut jouer en duel, un joueur saisit la séquence secrete et l'autre devine
    {
        printf("\nSaissez la séquence secrete\n");
        saisir_sequence_couleurs(mode, secret_sequence);
        system("clear");
    }

    else
        randomSequenceGenerate(secret_sequence, mode);
        
    
    printf("\nC'est parti vous avez %d essayes.\n", coutRestant);
    
    int i = 0;
    while (coutRestant > 0 && brocheNoir(secret_sequence, user_sequence) != 4)
    {
        saisir_sequence_couleurs(mode, user_sequence);
        cheville_noire[i] = brocheNoir(secret_sequence, user_sequence);
        cheville_blanche[i] = brocheBlanche(secret_sequence, user_sequence);
        strcpy(sequences[i], user_sequence);
        geusses[i] = guess;

        printf("| guess # | guess | result               |\n");
        printf("| ------- | ----- | -------------------- |\n");
        for (int j = 0; j <= i; j++)
        {
            
            printf("|    %d    | %s   | black: %d, white: %d  |\n", geusses[j], sequences[j], cheville_noire[j], cheville_blanche[j]);    
        }
        
        coutRestant--;
        guess++;
        i++;
    }

    i = 0;

    return coutRestant > 0;
}
