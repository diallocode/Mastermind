
#include "../Header/chevilles.h"


// Nombres de couleurs correctes ET bien placées 
int brocheNoir(char ser[], char sequenc[]){
    int Noirs = 0;
    int i = 0;
    while(i < 4){
        if(ser[i] == sequenc[i]){
            Noirs++;
        }
        i++;
    }
    return Noirs;
}

// Nombre de couleurs présentes dans la séquence mais mal placées
int brocheBlanche(char ser[], char sequence[]){
    if(brocheNoir(ser, sequence) == 4)
        return 0;
        
    int Blanches = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(ser[i]  == sequence[j] && i != j)
                Blanches++;
        }
    }
    return Blanches;
}