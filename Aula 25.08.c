#include <stdio.h>

/*

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

*/

int main()
{
    float nota1 = 0;
    float nota2 = 0;
    int pergunta = 2;
    int num = 1;

    while(pergunta == 2){
        printf("\nDigite a primeira nota do %d Aluno: ", num);
        scanf("%f", &nota1);
        printf("Digite a segunda nota do %d Aluno: ", num);
        scanf("%f", &nota2);
        float media = (nota1 + nota2) / 2;
        printf("\nA media do aluno %d é: %.2f\n\n", num, media);
        num = num + 1;
        printf("Digite 1 para parar de conferir as notas e 2 para continuar conferindo: ");
        scanf("%d", &pergunta);
    }

    printf("\nFim do Programa!");

    return 0;
}