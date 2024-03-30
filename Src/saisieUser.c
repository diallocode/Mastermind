#include"../Header/saisieUser.h"
#include"../Header/verification.h"


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

        printf("Chaine : %s\n", saisie_user);

        if(double_couleur(saisie_user) || !est_saisie_valide(saisie_user, niveau)){

            if(!est_saisie_valide(saisie_user, niveau))
            {
                printf("\nSaisie Erronée: ");
                printf("Veuillez saisir 4 couleurs qui correspondesnt aux lettres ci-hautes\n");
            }

            if(!niveau){  // Si c'est le niveau facile, on affiche les messages d'erreurs de doulons
                if(double_couleur(saisie_user)){
                    printf("\nSaisie Erronée: ");
                    printf("Y a des doublons de couleur dans la séquence saisie\n");
                }
            }
        }

    } while(!est_saisie_valide(saisie_user, niveau)); 
}

