#include"../Header/game.h"
#include"../Header/chargement_sequence.h"
#include<time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    
    char secret_sequence[4];
    char saisie_user[4];
    
    bool gagner = game(secret_sequence, saisie_user);
    
    if(gagner)
        printf("Brovo! vous avez gagné\n");
    else
        printf("Désolé, vous avez perdu(e), vous pouvez faire mieux la prochaine fois.\n");

    printf("A Bientôt§\n");

    return 0;
}
