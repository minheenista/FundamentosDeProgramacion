#include <stdio.h>
#include <stdlib.h>
// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    int x;
    
    scanf("%d", &x);
    
    int arreglo[x];
    
    for(int i=0;i<x;i++){
        scanf("%d", &arreglo[i]);
    }
    
    for(int j=0;j<x;j++){
        printf("%d\n", arreglo[j]);
    }

    return (0);
}
