#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    float x, y;
    
    printf("Ingresa un numero x: ");
    scanf("%f", &x);
    printf("Ingresa un numero y: ");
    scanf("%f", &y);
    
    
    printf("\nLa raiz cuadrada de x es: %f", sqrt(x));
    
    printf("\nLa funcion exponencial de x es: %f", exp(x));
    
    printf("\nEl logaritmo natural (base e) de x es: %f", log(x));
    
    printf("\nLogaritmo (base 10) de x es: %f", log10(x));
    
    printf("\nEl valor absoluto de x es: %f", fabs(x));
    
    printf("\nx redondeado al entero mas pequeño no menor x es: %f", ceil(x));
    
    printf("\nx redondeado al entero mas grande no mayor que x es: %f", floor(x));
    
    printf("\nx elevado a la y potencia es: %f", pow(x, y));
    
    printf("\nEl residuo de x f y como un numero de punto flotante es: %f", fmod(x, y));
    
    printf("\nEl seno trigonometrico de x es: %f", sin(x));
    
    printf("\nEl coseno trigonometrico de x es: %f", cos(x));
    
    printf("\nLa tangente trigonometrica de x es; %f", tan(x));    
    
    return (0);
}
