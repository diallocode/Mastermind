#ifndef __READSEQUENCETOFILE_H 
#define __READSEQUENCETOFILE_H 

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<stdbool.h>
#include"verification.h"
// tableau contenant la sequence secrète chargé depuis le fichier

void chargeSequenceFromFile(char secret_sequence[], bool niveau);
void randomSequenceGenerate(char secret_sequence[], bool niveau);
int random_index();
#endif