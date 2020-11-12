#include <stdio.h>
#include <stdlib.h>
// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    int i=1, j;
    
    while (i<=10){
        j=1;
        while(j<=10){
            printf("%4d", i*j);
            j=j+1;
        }
        printf("%\n");
        i=i+1;
    }
      
    return (0);
}
