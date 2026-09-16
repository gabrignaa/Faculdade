/*Exemplo do Fe*/

/*

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

*/

#include <stdio.h>
#include <math.h>>

/*
Elabore um programa que capture o RGM do Aluno, suas notas A1 e A2, calcule
a sua média. O programa deve permitir capturar os dados de 5 alunos da sala.
Somente após terminar de capturar todas as informações deverá apresentar 
todas elas, aluno por aluno.

OBJ PRINCIPAL: Mostrar corretamento as notas e medias dos 5 alunos.
ENTRADAS: RGM, A1, A2
SAÍDAS: RGM, A1, A2, MEDIA
PROCESSAMENTO: Media = A1 + A2
SEQUENCIAR: 
- Criar os espaços de armazenamento na memoria;
- Capturar RGM dos alunos;
- Capturar A1;
- Capturar A2;
- Calcular a media;
- Mostrar todas as informações aluno por aluno.
*/

int main(){
    float notas[5][3];
    int rgm[5];
    int numAluno = 1;
    int cont = 0;
    int aluno = 0;

    //PARA CAPTURAR O RGM E NOTAS A1 E A2 DOS ALUNOS
    printf("BEM VINDO AO SISTEMA DE NOTAS\n");
    printf("BEM VINDO AO SISTEMA DE NOTAS\n");
    for(cont=0; cont < 5; cont++){
        printf("Digite o RGM do %do do aluno: ", numAluno); //vai de 1 ate a 5
        scanf("%d", &rgm[cont]); //vai de 0 ate a 4

        printf("Digite a nota 1 do %do do aluno: ", numAluno); //vai de 1 ate a 5
        scanf("%f", &notas[cont][1]); //vai de 0 ate a 4

        printf("Digite a nota 2 do %do do aluno: ", numAluno); //vai de 1 ate a 5
        scanf("%f", &notas[cont][2]); //vai de 0 ate a 4

        numAluno += 1;
    }

    //PASSA POR TODOS OS ALUNOS CALCULANDO A MEDIA = A1 + A2
    for(aluno=0; aluno < 5; aluno++){
        notas[aluno][0] = notas[aluno][1] + notas[aluno][2];
    }

    //MOSTRAR TODAS AS NOTAS ALUNO POR ALUNO
    for(aluno=0; aluno < 5; aluno++){
        printf("Notas do Aluno RGM %d\n", rgm[aluno]);
        printf("==================\n");
        printf("Nota A1: %0.1f\n", notas[aluno][1]);
        printf("Nota A2: %0.1f\n", notas[aluno][2]);
        printf("Media do aluno: %0.1f\n\n", notas[aluno][0]);
    }


    return 0;
}