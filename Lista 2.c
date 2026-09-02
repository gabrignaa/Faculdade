#include <stdio.h>

/* a) Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão
é F:=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.



int main(){
    float GrausCelsius = 0;
    float Fahrenheit = 0;
    printf("Digite uma temperatura em graus celsius: ");
    scanf("%f", &GrausCelsius);
    Fahrenheit = (9 * GrausCelsius + 160) / 5;
    printf("\nSua tempertura em Fahrenheit é: %.2f", Fahrenheit);
    printf("Fim do programa!");

    return 0;
}

*/


/* b) Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que
faz 12 quilômetros por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto e a velocidade média
durante a viagem. Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA:= TEMPO*
VELOCIDADE. A partir do valor da distância, basta calcular a quantidade de litros de combustível utilizada na
viagem com a fórmula LITROS_USADOS := DISTANCIA/12. O programa deve apresentar os valores da
velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na viagem.*/

int main(){
    float tempo = 0;
    float VelocidadeMedia = 0;

    printf("Digite o tempo que durou a viagem em minutos: ");
    scanf("%f", &tempo);
    printf("Digite a velocidade média da viagem em: ");
    scanf("%f", &VelocidadeMedia);
    float distancia = tempo * VelocidadeMedia;
    float LitrosUsados = distancia / 12;

    printf("A velocidade média foi %.2f, o tempo gasto foi %.2f, você percorreu %.2f km, e usou %.2f litros de gasolina.", VelocidadeMedia, tempo, distancia, LitrosUsados);

    return 0;
}