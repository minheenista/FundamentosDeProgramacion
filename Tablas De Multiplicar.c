#include <stdio.h>
#include <stdlib.h>
// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    int x, tope, i=0;
    
    printf("Introduzca un numero para obtener su tabla de multiplicar: ");
    scanf("%d", &x);
    printf("Introduzaca hasta que numero: ");
    scanf("%d", &tope);
    
    while (i<=tope){
        printf("%d\n", x*i);
        i++;
    }
      
    return (0);
}
