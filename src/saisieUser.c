/**
 * \file saisi_utilisateur.c
 * \brief Contient le code de la fonction qui permet au joueur d'entrez une sequence de couleurs
*/

#include"saisieUser.h"
#include"verification.h"
#include"../lib/include/color.h"


void saisir_sequence_couleurs(bool niveau, char saisie_user[]){

    //Allouer 10 cases mémoire pour la sequence de couleurs

    do
    {
        print_color_text("\nR ", 'R'); printf("--> "); print_color_text("Red (Rouge)\n", 'R');
        print_color_text("G ", 'G'); printf("--> "); print_color_text("Green (Vert)\n", 'G');
        print_color_text("B ", 'B'); printf("--> "); print_color_text("Blue (Bleu)\n", 'B');;
        print_color_text("C ", 'C'); printf("--> "); print_color_text("Cyan (Cyan)\n", 'C');
        print_color_text("Y ", 'Y'); printf("--> "); print_color_text("Yellow (Jaune)\n", 'Y');
        print_color_text("P ", 'P'); printf("--> "); print_color_text("Purple (Violet)\n", 'P');
        
        printf("\nChoisir 4 couleurs parmi celles citées ci-hautes:");
        saisir(saisie_user, 6);
        smallLetter_to_capitalLetter(saisie_user);

        if(!niveau){ // Si c'est le niveau facile, on gére les messages d'erreurs de doulons


            if(!est_saisie_valide(saisie_user, niveau)){
                if(double_couleur(saisie_user)){ 
                    print_color_text("\nSaisie Erronée:\n", 'R');
                    print_color_text("- séquence incorrecte, y a des doublons et des couleurs inconnues\n", 'R');
                    print_color_text("- Veuillez saisir 4 couleurs qui correspondent aux lettres ci-hautes\n", 'R');
                }

                else{
                    print_color_text("\nSaisie Erronée:\n", 'R');
                    print_color_text("- séquence incorrecte, y a des couleurs inconnues\n", 'R');
                    print_color_text("- Veuillez saisir 4 couleurs qui correspondent aux lettres ci-hautes\n", 'R');
                }
            }
        }

        else
        {
            if(!est_saisie_valide(saisie_user, niveau)){
                print_color_text("- séquence incorrecte, y a des couleurs inconnues\n", 'R');
                print_color_text("- Veuillez saisir 4 couleurs qui correspondesnt aux lettres ci-hautes\n", 'R');
            }
        }

    } while(!est_saisie_valide(saisie_user, niveau)); 
}
