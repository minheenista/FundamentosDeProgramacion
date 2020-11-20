#include <stdio.h>
#include <stdlib.h>
// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {

    float arreglo[100];
    
    arreglo[0]=2;
    arreglo[1]=3;
    
    printf("El valor en la posicion 0 es %f \n", arreglo[0]);
    printf("El valor en la posicion 1 es %f \n", arreglo[1]);
    
    for(int i=2;i<100;i++){
        arreglo[i]=arreglo[i-1]+arreglo[i-2];
        printf("El valor en la posicion %i es %f \n",i, arreglo[i]);
    }

    return (0);
}
