#include"../include/saisieUser.h"
#include"../include/verification.h"
#include"../code_bibliotheque/include/color.h"


void saisir_sequence_couleurs(bool niveau, char saisie_user[]){

    //Allouer 10 cases mémoire pour la sequence de couleurs

    do
    {
        printf("\nR --> Red (Rouge)\n");
        printf("G --> Green (Vert)\n");
        printf("B --> Blue (Bleu)\n");
        printf("C --> Cyan (Cyan)\n");
        printf("Y --> Yellow (Jaune)\n");
        printf("P --> Purple (Violet)\n");
        
        printf("\nChoisir 4 couleurs parmi celles citées ci-hautes:");
        scanf("%s", saisie_user);

        smallLetter_to_capitalLetter(saisie_user);

        if(double_couleur(saisie_user) || !est_saisie_valide(saisie_user, niveau)){

            if(!est_saisie_valide(saisie_user, niveau))
            {
                print_color_text("\nSaisie Erronée: ", 'R');
                print_color_text("Veuillez saisir 4 couleurs qui correspondesnt aux lettres ci-hautes\n", 'R');
            }

            if(!niveau){  // Si c'est le niveau facile, on affiche les messages d'erreurs de doulons
                if(double_couleur(saisie_user)){
                    print_color_text("\nSaisie Erronée: ", 'R');
                    print_color_text("Y a des doublons de couleur dans la séquence saisie\n", 'R');
                }
            }
        }

    } while(!est_saisie_valide(saisie_user, niveau)); 
}

