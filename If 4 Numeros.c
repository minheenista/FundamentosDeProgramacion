
#include <stdio.h>
#include <stdlib.h>
// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones


int main() {
    
    float a, b, c, d;
    
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    
    if(a>b && a>c && a>d){
        printf("A es mayor");
    }
    else{
        if (b>a && b>c && b>d){
            printf("B es mayor");
        }
        else{
            if(c>a && c>b && c>d){
                printf("C es mayor");
            }
            else{
                printf("D es mayor");
            }
        }
    }
    
    return (0);
}
