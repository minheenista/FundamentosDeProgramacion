#include <stdio.h>
#include <stdlib.h>
// definicion y prototipos funciones

//variables y constantes

// implementacion de funciones

int main(int argc, char** argv) {
    int x;
    
    scanf("%d", &x);
    
    if (x!=1 && x>0){
        int p=0;
        int u=1;
        int n=3;
        int a=0;
        printf("%d\n", p);
        printf("%d\n", u);
        while(n<=x){
            a=u+p;
            printf("%d\n", a);
            p=u;
            u=a;
            n=n+1;
        }
    }
    else{
        printf("0");
    }
   
    return (0);
}
