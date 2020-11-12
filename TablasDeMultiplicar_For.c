#include <stdio.h>
#include <stdlib.h>
// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    for(int i=1; i<=10;i++){
        for(int j=1; j<=10;j++){
            printf("%4d", i*j);
        }
        printf("%\n");
    }      
    return (0);
}
