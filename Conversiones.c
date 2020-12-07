#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

float cenFar (float);

float farCen (float);

float cenKel (float);

float farKel (float);

float kelFar (float);

float kelCen (float);

void pausarlim ();

//variables y constantes

// implementacion de funciones


int main(int argc, char** argv) {
    
    float c, f, k, grad;
    int op;
    
    do{
        printf("\nIngresa '1' para convertir de Celcius a Fahrenheit ");
        printf("\nIngresa '2' para convertir de Celcius a Kelvin ");
        printf("\nIngresa '3' para convertir de Fahrenheit a Celcius ");
        printf("\nIngresa '4' para convertir de Fahrenheit a Kelvin ");
        printf("\nIngresa '5' para convertir de Kelvin a Celcius ");
        printf("\nIngresa '6' para convertir de Kelvin a Fahrenheit ");
        printf("\nIngresa '7' para salir\n");
        
        scanf("%d", &op);
        
        switch(op){
            case 1 : printf("\nIngresa los grados Celcius:  "); scanf("%f", &c); printf("\n Los grados en Fahrenheit son:  %f", cenFar(c));
            pausarlim ();
            break;
            
            case 2 : printf("\nIngresa los grados Celcius:  "); scanf("%f", &c); printf("\n Los grados en Kelvin son:  %f", cenKel(c));
            pausarlim ();
            break;
            
            case 3 : printf("\nIngresa los grados Fahrenheit:  "); scanf("%f", &f); printf("\n Los grados en Celcius son:  %f", farCen(f));
            pausarlim ();
            break;
            
            case 4 : printf("\nIngresa los grados Fahrenheit:  "); scanf("%f", &f); printf("\n Los grados en Kelvin son:  %f", farKel(f));
            pausarlim ();
            break;
            
            case 5 : printf("\nIngresa los grados Kelvin:  "); scanf("%f", &k); printf("\n Los grados en Celcius son:  %f", kelCen(k));
            pausarlim ();
            break;
            
            case 6 : printf("\nIngresa los grados Kelvin:  "); scanf("%f", &k); printf("\n Los grados en Fahrenheit son:  %f", kelFar(k));
            pausarlim ();
            break;
            
            case 7: printf("Saliendo...");
            break;
            
            default : printf("Opcion invalida");
            break;
        }
        
    }
    while(op!=7);

 return (0);
}

// funcion ya esta implementada

float cenFar (float c){
    float grad=(1.8*c)+32;
    return grad;
}

float farCen (float f){
    float grad=(f-32)/1.8;
    return grad;
}

float cenKel(float c){
    float grad=c+273.15;
    return grad;
}

float farKel (float f){
    float grad=((f-32)/1.8)+273.15;
    return grad;
}

float kelFar (float k){
    float grad=((k-273.15)*1.8)+32;
    return grad;
}

float kelCen (float k){
    float grad=k-273.15;
    return grad;
}

void pausarlim (){
    printf("\n");
    system("cmd /c pause");
    system("cmd.exe /c cls");
}