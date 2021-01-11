#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones


int main(int argc, char** argv) {
    int x=7;
    float b=33;
    printf("%d\n", x);
    printf("%p\n", &x);
    
    x=1709;
    printf("%d\n", x); // imprime valor de x
    printf("%p\n", &x); // imprime direccion de memoria de x
    
    int *aux = &x;
    printf("%p\n", aux); // imprime la direccion de memoria que es lo que esta almacenado en aux
    printf("%d\n", *aux); //imprime el contenido de la direccion de memoria
    

 return (0);
}

// funcion ya esta implementada