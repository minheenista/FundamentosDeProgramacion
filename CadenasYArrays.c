#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    char nombre[] = "minhee", apellido[]="kang";
    /*
    printf("Ingresa tu nombre: ");
    scanf("%s", &nombre);
    
    printf("Ingresa tu apellido: ");
    scanf("%s", &apellido);
    */
    printf("\nLongitud del nombre: %d", strlen(nombre));
    
    printf("\nNombre concatenado con el appelido: %s", strcat(nombre, apellido));
    
    printf("\nLas cadenas son iguales: %d", strcmp(nombre, apellido));
    
    printf("\nCopiar cadena en otra: %s", strcpy(nombre, apellido));
    
    
    
    return (0);
}
