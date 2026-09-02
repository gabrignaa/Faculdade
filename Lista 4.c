#include <stdio.h>

/* a) Elaborar um programa que apresente os quadrados dos números inteiros existentes na faixa de valores de
15 a 200

int main(){

    int cont = 0;

    for(cont=15; cont<=200; cont = cont+1){
        int quadrado = cont * cont;
        printf("\n%d", quadrado);
        printf("Fim do programa!");

        return 0;
    }
}


/* b) Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a qual deve ser
apresentada de acordo com sua forma tradicional. Ex.: 1x1 = 1 1x2 = 2

int main(){
    int cont = 0;
    int num = 0;
    int resultado = 0;

    printf("Digite um número para ver a tabuada dele: ");
    scanf("%d", &num);

    for(cont = 1; cont <= 10; cont = cont + 1){
        resultado = num * cont; 
        printf("%d x %d = %d\n", num, cont, resultado);
    }
}

*/


/* c) Construir um programa que apresente a soma dos cem primeiros números naturais: (0+1+2+3+
...+98+99+100).

int main(){
    int cont = 0;
    int prim = 0;
    
    for(cont = 1; cont <= 100; cont = cont + 1){
        prim = prim + cont;
        printf("%d\n", prim);
    }
}

*/

/* d) Escrever um programa que apresente como resultado a potência de uma base qualquer elevada a um
expoente qualquer, ou seja, de BS^EX, em que BS é o valor da base e EX o valor do expoente. Considere
apenas a entrada de valores inteiros e positivos, ou seja, de valores naturais. Use a técnica de laço de
repetição, em que o valor da base deve ser multiplicado o número de vezes determinado no expoente.

int main(){
    int base = 0;
    int expoente = 0;
    int cont = 0;
    int resultado = 1;

    printf("Digite um número para ser a base: ");
    scanf("%d", &base);
    printf("Digite um número para ser o expoente: ");
    scanf("%d", &expoente);

    for(cont = 1; cont <= expoente; cont = cont + 1){
        resultado = resultado * base;  
    }
    printf("%d\n", resultado);
}

*/

/* e) Escrever um programa que apresente os valores da sequência numérica de Fibonacci até o décimo quinto
termo. A sequência de Fibonacci é formada por 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ... etc.,
obtendo-se o próximo termo a partir da soma do termo atual com o anterior sucessivamente até o infinito se
a sequência não for interrompida.*/

int main(){
    int cont = 0;
    int numAtual = 1;
    int numAnterior = 0;
    int numProximo = 1;


    for(cont = 0; cont < 15; cont = cont + 1){
                printf("%d\n", numAnterior);
        numProximo = numAtual + numAnterior;
        numAnterior = numAtual;
        numAtual = numProximo; 

    }
}

