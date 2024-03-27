#include"../Header/game.h"
#include"../Header/chargement_sequence.h"
#include<time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    
    char secret_sequence[4];
    char saisie_user[4];

    printf("R --> Red (Rouge)\n");
    printf("G --> Green (Vert)\n");
    printf("B --> Blue (Bleu)\n");
    printf("C --> Cyan (Cyan)\n");
    printf("Y --> Yellow (Jaune)\n");
    printf("P --> Purple (Violet)\n");

    
    bool gagner = game(secret_sequence, saisie_user);
    
    if(gagner)
        printf("Brovo! vous avez gagné\n");
    else
        printf("Désolé, vous avez perdu(e), vous pouvez faire mieux la prochaine fois.\n");

    printf("A Bientôt§\n");

    return 0;
}
