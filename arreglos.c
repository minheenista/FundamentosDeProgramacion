#include <stdio.h>
#include <stdlib.h>
// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {

    int arreglo[5];
        
    arreglo[0] = 2;
    arreglo[1] = 5;
    arreglo[2] = 11;
    arreglo[3] = 67;
    arreglo[4] = -4;
    
    for (int x=0;x<5;x=x+1){
        printf("%d\n",arreglo[x]);    
    }
   
    for (int x=4;x>=0;x=x-1){
        printf("%d\n",arreglo[x]);    
    }

    return (0);
}
