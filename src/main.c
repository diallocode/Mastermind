/**
 * \file main.c
 * \brief Fonction principale du jeu
*/

#include"game.h"
#include"chargement_sequence.h"
#include<time.h>
#include"../lib/include/color.h"
#include"score.h"
#include"decoration.h"

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    
    char secret_sequence[6];
    char saisie_user[6];
    bool game_continue = true;
    char reponse = ' ';
    bool gagner = false;

    while (game_continue)
    {
        decoreApp();
        reponse = ' ';
        // initialiser la séquence de l'utilisateur et la sequence secrete.
        for (int i = 0; i < 6; i++){
            secret_sequence[i] = ' ';
            saisie_user[i] = ' ';
        }
            

            
        gagner = game(secret_sequence, saisie_user);
            
        if(gagner)
            print_color_text("BRAVO! VOUS AVEZ GAGNÉ(E)\n", 'G');
        else
            print_color_text("DÉSOLÉ, vous avez perdu(e), vous pouvez faire mieux la prochaine fois.\n", 'R');

        printf("Voulez vous relancer le jeu(Y/N)?");

            
        while (reponse != 'Y' && reponse != 'N')
        {
                
            reponse = toupper(saisir_caractere());
            if(reponse != 'Y' && reponse != 'N')
            print_color_text("\nVeuillez saisir Y ou N\n", 'R');
        }
            


        if(reponse == 'N')
            game_continue = false;
            
        system("clear");
    }
        
    printf("A Bientôt!\n");

    return 0;
}
