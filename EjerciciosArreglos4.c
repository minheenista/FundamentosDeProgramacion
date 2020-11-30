#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    int n, temp;
    
    scanf("%d", &n);
    
    int arreglo[n];
    float prom;
    
    for(int i=0;i<n;i++){
        scanf("%d", &arreglo[i]);
    }
    
    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            if (arreglo[i] < arreglo[j]){
                temp = arreglo[j];	
                arreglo[j]=arreglo[i];  
                arreglo[i]=temp;	
            }
        }
    }
    
    printf("\nLos valores ordenados de lista son: ");
    for(int i=0;i<n;i++){
        printf("%3d",arreglo[i]);
    }
    
    return (0);
}
