#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    
    char frase[256] = {0};
    scanf("%[^\n]", frase);
    
    int contador['z' - 'a'] = {0}; 
    
    for (int i = 0; i<strlen(frase); ++i){
        ++contador[frase[i] - 'a'];
    }

    for(int i=0;i<('z' - 'a');i++){
        printf("\nLetra %c aparece: %d veces",i+97, contador[i]);
    }
    printf("\nLetra z aparece: %d veces", contador[25]-1);

    return (0);
}
