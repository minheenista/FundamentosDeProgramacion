#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones


int main(int argc, char** argv) {
    
    FILE* fichero;
    fichero = fopen("ficheros1.txt", "wt");  //crear fichero
    fputs("Minhee te amo (linea 1)\n", fichero);
    fputs("Youngjae te amo (linea 2)\n", fichero);
    fputs("Hyewon te amo (linea 3)\n", fichero);
    fputs("Yein te amo (linea 4)\n", fichero);
    fputs("Jerome te amo (linea 5)\n", fichero);
    fputs("Changuk te amo (linea 6)\n", fichero);
    
    fclose(fichero);
    printf("Proceso completado");

    return (0);
}
