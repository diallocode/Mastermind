#include"../Header/game.h"
#include"../Header/chargement_sequence.h"
#include<time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    
    char secret_sequence[4];
    char saisie_user[4];
    bool game_continue = true;
    char reponse = ' ';
    bool gagner = false;
    

    while (game_continue)
    {
        reponse = ' ';
        
        gagner = game(secret_sequence, saisie_user);
        
        if(gagner)
            printf("Bravo! vous avez gagné\n");
        else
            printf("Désolé, vous avez perdu(e), vous pouvez faire mieux la prochaine fois.\n");    

        printf("Voulez vous relancer le jeu(Y/N)?");

        
        while (reponse != 'Y' && reponse != 'N')
        {
            
            reponse = toupper(saisir_caractere());
        }
        
        if(reponse == 'N')
            game_continue = false;
        system("clear");

    }
    

    printf("A Bientôt§\n");

    return 0;
}
