#include <stdio.h>
#include <stdlib.h>
// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    int n, temp;
    
    scanf("%d", &n);
    
    int arreglo[n];
    
    for(int i=0;i<n;i++){
        scanf("%d", &arreglo[i]);
    }
    
    for (int i=1;i<n;i++){
        for (int j=0;j<n-1;j++){
            if (arreglo[j] > arreglo[j+1]){
                temp = arreglo[j];	 //temp guarda momentaneamente el valor de arreglo[j]
                arreglo[j]=arreglo[j+1];  //Asigno al la posicion arreglo[j], lo que hay en arreglo[j+1]
                arreglo[j+1]=temp;	//obtendra un nuevo valor por parte de temp.
            }
        }
    }
    
    printf("\nLos valores ordenados de lista son: ");
    for(int i=0;i<n;i++){
        printf("%3d",arreglo[i]);
    }

    return (0);
}
