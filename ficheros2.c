#include <stdio.h>
#include <stdlib.h>

// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones


int main(int argc, char** argv) {
    
    int a, b, c;
    float m;
    
    scanf("%d%d%d", &a, &b, &c);
    m=(a+b+c)/3;
            
    FILE* datos;
    datos = fopen("datos.txt", "wt");  //crear fichero
    
    fprintf (datos, "%d\n%d\n%d\n%f", a, b, c, m);
    
    fclose(datos);
    printf("Proceso completado");

    return (0);
}
