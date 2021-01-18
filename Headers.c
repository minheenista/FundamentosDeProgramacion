#include <stdio.h>
#include <stdlib.h>
#include "FuncionesHeader.h"

// 1 Definir funciones y variables en un .c
// 2 En un .h hacer la implementacion de funciones
// 3 En el main hacer el include del archivo .h

// definicion y prototipos funciones


//variables y constantes

// implementacion de funciones


int main(int argc, char** argv) {
    float a=17, b=333, r=8;
    
    printf("Resultado suma: %f", suma(a, b));
    printf("\nResultado resta: %f", resta(a, b));
    printf("\nResultado multiplicacion: %f", multiplicacion(a, b));
    printf("\nResultado division: %f", division(a, b));
    printf("\nResultado area circulo: %f", areaCirculo(r));
    
    
    return (0);
}
