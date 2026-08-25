#include <stdio.h>

int main()
{
    int num = 0;
    int qtd = 0;

    printf("Digite em qual numero vai comecar a contagem: ");
    scanf("%d", &num);
    printf("Digite a qtd de vezes que voce quer que mostre o numero: ");
    scanf("%d", &qtd);

    while(num <= qtd){
        printf("Numero: %d \n", num);
        num = num + 1;
    }

    return 0;
}