#include"game.h"
#include"../lib/include/color.h"


bool game(char secret_sequence[], char user_sequence[]){
    int coutRestant = 10, geuss = 1;
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
        print_color_text("\nPrincipe :",'R');
        printf("Un joueur entre une sequence secrète et le second tente de la deviner.\n");
        printf("Entrez une séquence secrete \n");
        saisir_sequence_couleurs(mode, secret_sequence);
        system("clear");
    }

    else
        randomSequenceGenerate(secret_sequence, mode);
        
    
    printf("\nC'est parti vous avez %d essayes.\n", coutRestant);
    
    

    printf("| guess # | guess | result               |\n");
    printf("| ------- | ----- | -------------------- |\n");    
    while (coutRestant > 0 && brocheNoir(secret_sequence, user_sequence) != 4)
    {

        saisir_sequence_couleurs(mode, user_sequence);

        printf("|    %d   | %s  | black: %d, white: %d |\n", geuss, user_sequence, brocheNoir(secret_sequence, user_sequence), brocheBlanche(secret_sequence, user_sequence));

        coutRestant--;
        geuss++;
    }

    return coutRestant > 0;
}
