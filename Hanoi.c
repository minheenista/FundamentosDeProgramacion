#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

void hanoi(int n, char origen, char dest, char aux);

int main(int argc, char** argv) {
    
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');     
    
    return (0);
}
void hanoi(int n, char origen, char dest, char aux){
    if(n==1){
        printf("Mueva el disco %d desde la torre %c hasta la torre %c \n", n, origen, dest);
        return;
    }
    else{
        hanoi(n-1, origen, aux, dest);
        printf("Mueva el disco %d desde la torre %c hasta la torre %c \n", n, origen, dest);
        hanoi(n-1, aux, dest, origen);
    }
}