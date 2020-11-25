#include <stdio.h>
#include <stdlib.h>
// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    int n;
    int max=0, min=0;
    
    scanf("%d", &n);
    
    int arreglo[n];
    
    for(int i=0;i<n;i++){
        scanf("%d", &arreglo[i]);
    }
    min=arreglo[0];

    for(int i=0; i<n; i++){
        if(arreglo[i]>max){
            max=arreglo[i];  
        } 
        if(min > arreglo[i]){
            min=arreglo[i];
        }
    }
    
    printf("\n El valor maximo es: %d", max);
    printf("\n El valor minimo es: %d", min);
    
    return (0);
}
