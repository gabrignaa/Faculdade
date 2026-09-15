/*Exemplo do Fe*/

#include <stdio.h>

int main(){
    int numeros[5];
    int cont1;
    for(cont1 = 0; cont1 < 5; cont1 += 1){
        printf("Digite um número: ");
        scanf("%d", &numeros[cont1]);
    }

    printf("\nOs valores de cada vetor: %d, %d, %d, %d, %d", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4]);

    return 0;
}