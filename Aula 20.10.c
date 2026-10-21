#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto {
    int codigo;
    char categoria;
    double valor;
    int quantidade;
    char descricao[50];
};

int main(){
    struct produto p1;
    printf("Digite o codigo do produto: \n");
    scanf("%d", &p1.codigo);
    printf("Digite a categoria do produto: \n");
    scanf(" %c", &p1.categoria);
    printf("Digite o valor do produto: \n");
    scanf("%lf", &p1.valor);
    printf("Digite a quantidade do produto: \n");
    scanf("%d", &p1.quantidade);

    getchar();

    printf("Digite a descricao do produto: \n");
    gets(p1.descricao);

    printf("Codigo: %d\n", p1.codigo);
    printf("Categoria: %c\n", p1.categoria);
    printf("Valores: %.2lf\n", p1.valor);
    printf("Quantidade: %d\n", p1.quantidade);
    printf("Descricao: %s\n", p1.descricao);

    return 0;
    
}
