#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int fact(int n);

int main(int argc, char** argv) {
    
    int n;
    scanf("%d", &n);
    
    printf("El factorial de %d es %d: ", n, fact(n));
    
    return (0);
}

int fact(int n)
{
    if(n==0 || n==1)
        return 1;
 
    else
        return n*fact(n-1);
}