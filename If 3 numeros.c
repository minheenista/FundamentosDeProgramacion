#include <stdio.h>
#include <stdlib.h>
// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    float a, b, c;
    
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    
    if(a>b && a>c ){
        printf("A es mayor");
    }
    else{
        if (b>a && b>c ){
            printf("B es mayor");
        }
        else{
            printf("C es mayor");
        }
    }
    
    return (0);
}