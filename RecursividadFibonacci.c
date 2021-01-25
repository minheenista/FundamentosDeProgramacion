#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int fibo(int n);

int main(int argc, char** argv) {
    
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("%2d ", fibo(i));
    }
    return (0);
}

int fibo(int n)
{
    if (n == 0){
        return 0;
    }
    if (n == 1 || n == 2){
        return 1;
    }
    else{
        return (fibo(n - 1) + fibo(n - 2));
    }
        
}