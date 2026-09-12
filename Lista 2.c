#include <stdio.h>
#include <math.h>

/* a) Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão
é F:=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

*/

int main(){
    float GrausCelsius = 0;
    float Fahrenheit = 0;
    printf("Digite uma temperatura em graus celsius: ");
    scanf("%f", &GrausCelsius);
    Fahrenheit = (9 * GrausCelsius + 160) / 5;
    printf("\nSua tempertura em Fahrenheit e: %.2f", Fahrenheit);
    printf("\nFim do programa!\n");
    

    /* b) Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que
faz 12 quilômetros por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto e a velocidade média
durante a viagem. Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA:= TEMPO*
VELOCIDADE. A partir do valor da distância, basta calcular a quantidade de litros de combustível utilizada na
viagem com a fórmula LITROS_USADOS := DISTANCIA/12. O programa deve apresentar os valores da
velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na viagem.*/


    float tempo = 0;
    float VelocidadeMedia = 0;

    printf("Digite o tempo que durou a viagem em minutos: ");
    scanf("%f", &tempo);
    printf("Digite a velocidade media da viagem em: ");
    scanf("%f", &VelocidadeMedia);
    float distancia = tempo * VelocidadeMedia;
    float LitrosUsados = distancia / 12;

    printf("A velocidade media foi %.2f, o tempo gasto foi %.2f, você percorreu %.2f km, e usou %.2f litros de gasolina.", VelocidadeMedia, tempo, distancia, LitrosUsados);
    printf("\nFim do programa!\n");



/*c) Efetuar o cálculo e apresentar o valor de uma prestação de um bem em atraso, utilizando a fórmula
PRESTAÇÃO:=VALOR + (VALOR*(TAXA/100)*TEMPO).*/


    float valor = 0;
    float taxa = 0;
    float temp = 0;
    float prestacao = 0;

    printf("Digite o valor da prestacao: ");
    scanf("%f", &valor);
    printf("Qual o tempo que demorou para pagar a prestacao em meses: ");
    scanf("%f", &temp);
    printf("Digite a porcentagem da taxa: ");
    scanf("%f", &taxa);

    prestacao = valor + (valor*(taxa/100)*temp);
    printf("O valor da prestacao e: %.2f", prestacao);
    printf("\nFim do programa!\n");


/*d) Ler dois valores para as variáveis A e B e efetuar a troca dos valores de forma que a variável A passe a possuir
o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar os valores após a efetivação
do processamento da troca*/


    float a = 0;
    float b = 0;

    printf("Digite o valor da variavel A: ");
    scanf("%f", &a);
    printf("Digite o valor da variavel B: ");
    scanf("%f", &b);

    float c = a;
    a = b;
    b = c;

    printf("Valor de A apos a troca: %.1f\n", a);
    printf("Valor de B apos a troca: %.1f", b);
    printf("\nFim do programa!\n");


/*Ler quatro valores numéricos inteiros e apresentar o resultado das adições e das multiplicações para a máxima
combinação possível entre as quatro variáveis. Considerando a leitura de valores para as variáveis A, B, C e D,
devem ser feitas seis adições e seis multiplicações, ou seja, deve ser combinada a variável A com a variável B,
a variável A com a variável C, a variável A com a variável D. Depois é necessário combinar a variável B com a
variável C e a variável B com a variável D e, por fim, a variável C será combinada com a variável D.*/


    float valor1 = 0;
    float valor2 = 0;
    float valor3 = 0;
    float valor4 = 0;
    float soma1 = 0;
    float soma2 = 0;
    float soma3 = 0;
    float soma4 = 0;
    float soma5 = 0;
    float soma6 = 0;
    float mult1 = 0;
    float mult2 = 0;
    float mult3 = 0;
    float mult4 = 0;
    float mult5 = 0;
    float mult6 = 0;


    printf("Digite o primeiro valor A: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor B: ");
    scanf("%f", &valor2);
    printf("Digite o terceiro valor C: ");
    scanf("%f", &valor3);
    printf("Digite o quarto valor D: ");
    scanf("%f", &valor4);

    soma1 = valor1 + valor2;
    soma2 = valor1 + valor3;
    soma3 = valor1 + valor4;
    soma4 = valor2 + valor3;
    soma5 = valor2 + valor4;
    soma6 = valor3 + valor4;

    mult1 = valor1 * valor2;
    mult2 = valor1 * valor3;
    mult3 = valor1 * valor4;
    mult4 = valor2 * valor3;
    mult5 = valor2 * valor4;
    mult6 = valor3 * valor4;

    printf("A soma de A+B: %.0f\n", soma1);
    printf("A soma de A+C: %.0f\n", soma2);
    printf("A soma de A+D: %.0f\n", soma3);
    printf("A soma de B+C: %.0f\n", soma4);
    printf("A soma de B+D: %.0f\n", soma5);
    printf("A soma de C+D: %.0f\n", soma6);

    printf("A multiplicacao de A*B: %.0f\n", mult1);
    printf("A multiplicacao de A*C: %.0f\n", mult2);
    printf("A multiplicacao de A*D: %.0f\n", mult3);
    printf("A multiplicacao de B*C: %.0f\n", mult4);
    printf("A multiplicacao de B*D: %.0f\n", mult5);
    printf("A multiplicacao de C*D: %.0f\n", mult6);

    printf("\nFim do programa!\n");


/*f) Efetuar a leitura de um valor numérico inteiro e apresentar o resultado do valor lido elevado ao quadrado.*/


    float num = 0;

    printf("Digite um numero para ver ele ao quadrado: ");
    scanf("%f", &num);

    float resultado = pow(num, 2);

    printf("O resultado e %.2f", resultado);
    printf("\nFim do programa!\n");


/*g) Elaborar um programa que apresente o valor da conversão em real (R$) de um valor lido em dólar (US$). O
programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares disponível com o usuário.*/


    float ValorReal = 0;
    float cotacao = 0;
    float QtdDolar = 0;

    printf("Digite o valor do dolar hoje: ");
    scanf("%f", &cotacao);
    printf("Digite quantos dolares voce tem: ");
    scanf("%f", &QtdDolar);

    ValorReal = cotacao * QtdDolar;

    printf("O valor convertido em real e: %.2f", ValorReal);
    printf("\nFim do programa!\n");


/*h) Elaborar um programa que leia o valor numérico correspondente ao salário mensal de um trabalhador e também
faça a leitura do valor do percentual de reajuste a ser atribuído. Apresentar o valor do novo salário.*/


    float salario = 0;
    float reajuste = 0;

    printf("Digite seu salario: ");
    scanf("%f", &salario);
    printf("Digite a porcentagem do seu reajuste: ");
    scanf("%f", &reajuste);

    float SalarioNovo = salario + salario * (reajuste/100);

    printf("Seu salario novo e: %.2f", SalarioNovo);
    printf("\nFim do programa!\n");


/*i) Em uma eleição sindical concorreram ao cargo de presidente três candidatos. Durante a apuração dos votos
foram computados votos nulos e em branco, além dos votos válidos para cada candidato. Deve ser criado um
programa de computador que faça a leitura da quantidade de votos válidos para cada candidato, além ler
também a quantidade de votos nulos e em branco. Ao final o programa deve apresentar o número total de
eleitores, considerando votos válidos, nulos e em branco; o percentual correspondente de votos válidos em
relação à quantidade de eleitores; o percentual correspondente de votos válidos do candidato A em relação à
quantidade de eleitores; o percentual correspondente de votos válidos do candidato B em relação à quantidade
de eleitores; o percentual correspondente de votos válidos do candidato C em relação à quantidade de eleitores;
o percentual correspondente de votos nulos em relação à quantidade de eleitores; e por último o percentual
correspondente de votos em branco em relação à quantidade de eleitores*/


    int nume1, nume2, nume3, nulo, branco, total;
    float percValidos, percA, percB, percC, percNulo, percBranco;

    printf("Digite a quantidade de votos do candidato A: ");
    scanf("%d", &nume1);

    printf("Digite a quantidade de votos do candidato B: ");
    scanf("%d", &nume2);

    printf("Digite a quantidade de votos do candidato C: ");
    scanf("%d", &nume3);

    printf("Digite a quantidade de votos nulos: ");
    scanf("%d", &nulo);

    printf("Digite a quantidade de votos em branco: ");
    scanf("%d", &branco);

    total = nume1 + nume2 + nume3 + nulo + branco;

    percValidos = ((float)(nume1 + nume2 + nume3) / total) * 100;
    percA = ((float)nume1 / total) * 100;
    percB = ((float)nume2 / total) * 100;
    percC = ((float)nume3 / total) * 100;
    percNulo = ((float)nulo / total) * 100;
    percBranco = ((float)branco / total) * 100;

    printf("\nTotal de eleitores: %d\n", total);
    printf("Percentual de votos validos: %.2f%%\n", percValidos);
    printf("Percentual de votos do candidato A: %.2f%%\n", percA);
    printf("Percentual de votos do candidato B: %.2f%%\n", percB);
    printf("Percentual de votos do candidato C: %.2f%%\n", percC);
    printf("Percentual de votos nulos: %.2f%%\n", percNulo);
    printf("Percentual de votos em branco: %.2f%%\n", percBranco);
    printf("\nFim do programa!\n");


/*j) Elaborar um programa que leia dois valores numéricos reais desconhecidos. Calcular e apresentar os resultados
das quatro operações aritméticas básicas.*/


    float numero1, numero2;
    float soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro valor: ");
    scanf("%f", &numero1);

    printf("Digite o segundo valor: ");
    scanf("%f", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("\nSoma: %.2f\n", soma);
    printf("Subtracao: %.2f\n", subtracao);
    printf("Multiplicacao: %.2f\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);

    printf("\nFim do programa!\n");

    return 0;
}
