#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definicion y prototipos funciones

float multiplicar (float, float);

float areaTriangulo (float, float);

float areaCirculo(float);

//variables y constantes

// implementacion de funciones


int main(int argc, char** argv) {
    
    float x, y, res2;
    scanf("%f", &x);
    scanf("%f", &y);
    
    float res=multiplicar(x, y);
    printf("%.2f", res);
    
    /////////////////////////////////////////////////////////////
    
    float b, h;
    
    printf("\nDame la base del traingulo: ");
    scanf("%f", &b);
    printf("\nDame la altura del triangulo: ");
    scanf("%f", &h);
    
    float area=areaTriangulo(b, h);
    printf("El area del triangulo es: %.2f", area);
    
    ///////////////////////////////////////////////////////////////////
    
    float r;
    
    printf("\n\nDame el radio del circulo: ");
    scanf("%f", &r);
    
    float areaci=areaCirculo(r);
    printf("El area del circulo es: %.2f", areaci);
    
    
    return (0);
}

// funcion ya esta implementada

float multiplicar (float x, float y){
    float res=x*y;
    return res;
}

float areaTriangulo(float base, float altura){
    float area=(base*altura)/2;
    return area;
}

float areaCirculo(float radio){
    float areac=(radio*radio)*3.1416;
    return areac;


}