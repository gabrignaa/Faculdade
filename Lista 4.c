#include <stdio.h>

/*USANDO FOR*/

/* a) Elaborar um programa que apresente os quadrados dos números inteiros existentes na faixa de valores de
15 a 200*/


int main(){


    int cont1 = 0;

    for(cont1=15; cont1<=200; cont1 = cont1+1){
        int quadrado = cont1 * cont1;
        printf("\n%d", quadrado);
    }

    printf("\nFim do programa!\n");


/* b) Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a qual deve ser
apresentada de acordo com sua forma tradicional. Ex.: 1x1 = 1 1x2 = 2*/


    int cont2 = 0;
    int num = 0;
    int resultado = 0;

    printf("Digite um número para ver a tabuada dele: ");
    scanf("%d", &num);

    for(cont2 = 1; cont2 <= 10; cont2 = cont2 + 1){
        resultado = num * cont2; 
        printf("%d x %d = %d\n", num, cont2, resultado);
    }

    printf("\nFim do programa!\n");


/* c) Construir um programa que apresente a soma dos cem primeiros números naturais: (0+1+2+3+
...+98+99+100).*/


    int cont3 = 0;
    int prim = 0;
    
    for(cont3 = 1; cont3 <= 100; cont3 = cont3 + 1){
        prim = prim + cont3;
        printf("%d\n", prim);
    }

    printf("\nFim do programa!\n");


/* d) Escrever um programa que apresente como resultado a potência de uma base qualquer elevada a um
expoente qualquer, ou seja, de BS^EX, em que BS é o valor da base e EX o valor do expoente. Considere
apenas a entrada de valores inteiros e positivos, ou seja, de valores naturais. Use a técnica de laço de
repetição, em que o valor da base deve ser multiplicado o número de vezes determinado no expoente*/


    int base = 0;
    int expoente = 0;
    int cont4 = 0;
    int resultado1 = 1;

    printf("Digite um número para ser a base: ");
    scanf("%d", &base);
    printf("Digite um número para ser o expoente: ");
    scanf("%d", &expoente);

    for(cont4 = 1; cont4 <= expoente; cont4 = cont4 + 1){
        resultado1 = resultado1 * base;  
    }
    printf("%d\n", resultado1);
    
    printf("\nFim do programa!\n");


/* e) Escrever um programa que apresente os valores da sequência numérica de Fibonacci até o décimo quinto
termo. A sequência de Fibonacci é formada por 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ... etc.,
obtendo-se o próximo termo a partir da soma do termo atual com o anterior sucessivamente até o infinito se
a sequência não for interrompida.*/


    int cont5 = 0;
    int numAtual = 1;
    int numAnterior = 0;
    int numProximo = 1;


    for(cont5 = 0; cont5 < 15; cont5 = cont5 + 1){
                printf("%d\n", numAnterior);
        numProximo = numAtual + numAnterior;
        numAnterior = numAtual;
        numAtual = numProximo; 

    }

    printf("\nFim do programa!\n");





/*f) Construir um programa que apresente todos os valores numéricos divisíveis por 4 e menores que 200. A
variável que controla o contador do laço de repetição deve ser iniciada com valor 1 e possuir passo 1.*/


    int contador1 = 1;

        while (contador1 < 200) {
            if (contador1 % 4 == 0) {
                printf("%d ", contador1);
            }

            contador1 += 1;

        }
    
    printf("\nFim do programa!\n");


/*g) Elaborar um programa que apresente os valores de conversão de graus Celsius em graus Fahrenheit, de
dez em dez graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O
programa deve apresentar os valores das duas temperaturas.*/


int contador2 = 10;
float fahrenheit;

while (contador2 <= 100) {
    fahrenheit = (contador2 * 9.0 / 5.0) + 32;

    printf("Celsius: %d | Fahrenheit: %.2f\n", contador2, fahrenheit);

    contador2 += 10;
}


    printf("\nFim do programa!\n");


/*h) Escrever um programa que calcule e apresente o somatório do número de grãos de trigo que se pode obter
num tabuleiro de xadrez, obedecendo à seguinte regra: colocar um grão de trigo no primeiro quadro e nos
quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro quadro coloca-se um grão, no segundo
quadro colocam-se dois grãos (neste momento têm-se três grãos), no terceiro quadro colocam-se quatro
grãos (tendo neste momento sete grãos), no quarto quadro colocam-se oito grãos (tendo-se então 15 grãos)
até atingira sexagésimo quarto quadro.*/


    int contador3 = 1;
    unsigned long long graos = 1;
    unsigned long long total1 = 0;

    while (contador3 <= 64) {
        total1 += graos;
        graos *= 2;
        contador3 += 1;
        }

    printf("Total de graos: %I64u\n", total1);

    printf("\nFim do programa!\n");


/*i) Elaborar um programa que leia dez valores numéricos reais e apresente no final o somatório e a média dos valores lidos.*/


int conta = 1;
float soma = 0;
float valor = 0;

while(conta <= 10) {
    printf("Digite o %dº valor: ", conta);
    scanf("%f", &valor);

    soma = soma + valor;

    conta += 1;
}

float media = soma / 10;

printf("A soma dos 10 numeros e: %.1f\n", soma);
printf("A media dos 10 numeros e: %.1f\n", media);

printf("\nFim do programa!\n");


/*j) Elaborar um programa que leia sucessivamente valores numéricos e apresente no final o somatório, a média
e o total de valores lidos. O programa deve ler os valores enquanto o usuário estiver fornecendo valores
positivos. Ou seja, o programa deve parar quando o usuário fornecer um valor negativo (menor que zero).*/


    int conta10 = 1;
    float soma10 = 0;
    float valor10 = 0;

    while(valor10 >= 0) {
        printf("Digite o %dº valor: ", conta10);
        scanf("%f", &valor10);

        if(valor10 >= 0) {
            soma10 = soma10 + valor10;
            conta10 += 1;
        }
    }  // fecha o while

    float media10 = soma10 / (conta10 - 1);

    printf("A soma dos numeros e: %.1f\n", soma10);
    printf("A media dos numeros e: %.1f\n", media10);
    printf("Total de valores lidos: %d\n", conta10 - 1);

    printf("\nFim do programa!\n"); 
}