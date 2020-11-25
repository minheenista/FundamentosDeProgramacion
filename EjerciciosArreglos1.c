#include <stdio.h>
#include <stdlib.h>
// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    int n;
    
    scanf("%d", &n);
    
    int arreglo[n];
    float prom;
    
    for(int i=0;i<n;i++){
        scanf("%d", &arreglo[i]);
        prom=prom+arreglo[i];
    }
    prom=prom/n;
    printf("El promedio es: %f", prom);
    

    return (0);
}
