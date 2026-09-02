#include <stdio.h>

int main(){

    int cont = 0;

    do{

    for(cont = 1; cont <= 10; cont = cont + 1){
        printf("%d\n", cont);
    }

    printf("Valor: %d", cont);

    }while(cont < 100);
}