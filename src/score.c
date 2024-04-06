/**
 * \file score.c
 * \brief Contient les codes des fonctions qui permettent de gerer le score d'un joueur
*/


#include"score.h"


int lire_score(Score score[]){
    FILE *file = fopen("src/score.txt", "r");

    if(file == NULL){
        printf("Erreur: l'ouverture du fichier à échouer\n");
        exit(EXIT_FAILURE);
    }

    int nombre_scores = 0;

    while (nombre_scores < SCORE_MAX && fscanf(file, "%s %d", score[nombre_scores].nom, &score[nombre_scores].score) != EOF)
        nombre_scores++;
    
    fclose(file);

    return nombre_scores;
}

/*------------------------------------------------------------------------------------------------------------------------*/

void print_score(Score scores[], int taille){
    printf("----------Scores----------\n");

    if(taille == 0)
        printf("        Aucun score\n");

    for (int i = 0; i < taille; i++)
        printf("%s --> %d\n", scores[i].nom, scores[i].score);
}

/*------------------------------------------------------------------------------------------------------------------------*/

void save_score(Score s){
    Score scores[SCORE_MAX];
    int nombre_scores_lus = lire_score(scores); // récuperer les scores

    FILE *file = fopen("src/score.txt", "w");
    if(file == NULL){
        print_color_text("Erreur: L'ouverture du fichier à échouer\n", 'R');
        exit(EXIT_FAILURE);
    }


    int index = present_user(scores, s.nom);
    if(index != -1)  // Si l'utilisateur présent, on remplace juste son ancien score
        scores[index].score = s.score;

    else{
        
        if(nombre_scores_lus == SCORE_MAX){ // si on a trois scores dans le fichier, on écraser le plus petit
            int index_minimum_score = index_minimum(scores);

            scores[index_minimum_score] = s;
        }

        else{ //sinon, on a de la place dans le fichier, on met juste le nouveau score
            scores[nombre_scores_lus] = s;
            nombre_scores_lus ++;
        }
    }

    //trier les scores par ordre décroissant avant de les stocker
    bubbleSort(scores, nombre_scores_lus);

    for (int i = 0; i < SCORE_MAX && nombre_scores_lus > 0; i++, nombre_scores_lus --)
        fprintf(file, "%s %d\n", scores[i].nom, scores[i].score);


    fclose(file);
}

/*------------------------------------------------------------------------------------------------------------------------*/

int present_user(Score scores[], char nom[]){

    for (int i = 0; i < SCORE_MAX; i++)
        if(strcmp(scores[i].nom, nom) == 0)
            return i;
    return -1;
}

/*------------------------------------------------------------------------------------------------------------------------*/

int index_minimum(Score scores[]){
    return minimum(minimum(scores[0].score, scores[1].score), scores[2].score);
}

/*------------------------------------------------------------------------------------------------------------------------*/

int minimum(int a, int b){
    if(a < b)
        return a;
    return b;
}

/*------------------------------------------------------------------------------------------------------------------------*/

void bubbleSort(Score scores[], int taille) {
    int i, j, temp;
    for (i = 0; i < taille-1; i++) {
        for (j = 0; j < taille-i-1; j++) {
            if (scores[j].score < scores[j+1].score) {
                // Échange des éléments
                temp = scores[j].score;
                scores[j].score = scores[j+1].score;
                scores[j+1].score = temp;
            }
        }
    }
}
