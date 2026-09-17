#include <stdio.h>
#include <math.h>


/*Exemplo do Fe*/

/*
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

V1 = Mostrar se o aluno passou ou reprovou de ano após a divulgação das notas.
V2 = Permitir que o professor escolha a quantidade de alunos da turma.
V3 = Imperdir com um laço que o programa siga quando o usuário digitar uma nota 1 e 2 inválida.
V4 = Crie um mecanismo que permita capturar a nota da avaliação substutiva e calcular a media final.
*/





int main(){
    int numAluno = 1;
    int numAluno2 = 1;
    int cont = 0;
    int aluno = 0;
    int QtdAlunos = 0;

    printf("BEM VINDO AO SISTEMA DE NOTAS\n");

    //CAPTURA E GUARDA A QUANTIDADE DE ALUNOS DA SALA
    printf("Digite a quantidade de alunos da sala: ");
    scanf("%d", &QtdAlunos);

    //CRIA OS VETORES/MATRIZ COM A QTD DE ALUNOS
    float notas[QtdAlunos][3];
    int rgm[QtdAlunos];

    //PARA CAPTURAR O RGM E NOTAS A1 E A2 DOS ALUNOS
    for(cont = 0; cont < QtdAlunos; cont++){

        printf("Digite o RGM do %do aluno: ", numAluno);
        scanf("%d", &rgm[cont]);

        notas[cont][1] = -1;
        notas[cont][2] = -1;

        //CAPTURA A NOTA 1
        while(notas[cont][1] < 0){
            printf("Digite a nota 1 do %do aluno: ", numAluno);
            scanf("%f", &notas[cont][1]);

            if(notas[cont][1] > 10){
                notas[cont][1] = -1;
            }
        }

        //CAPTURA A NOTA 2
        while(notas[cont][2] < 0){
            printf("Digite a nota 2 do %do aluno: ", numAluno);
            scanf("%f", &notas[cont][2]);

            if(notas[cont][2] > 10){
                notas[cont][2] = -1;
            }
        }

        numAluno += 1;
    }

    //PASSA POR TODOS OS ALUNOS CALCULANDO A MEDIA = A1 + A2
    for(aluno = 0; aluno < QtdAlunos; aluno++){
        notas[aluno][0] = notas[aluno][1] + notas[aluno][2];
    }

    //AVALIAÇÃO SUBSTITUTIVA
    for(aluno = 0; aluno < QtdAlunos; aluno++){

        if(notas[aluno][0] < 12){

            float notaSubstitutiva = -1;

            printf("\nAluno RGM %d precisa fazer a substitutiva.\n", rgm[aluno]);

            //CAPTURA A NOTA DA SUBSTITUTIVA
            while(notaSubstitutiva < 0){
                printf("Digite a nota da substitutiva: ");
                scanf("%f", &notaSubstitutiva);

                if(notaSubstitutiva > 10){
                    notaSubstitutiva = -1;
                }
            }

            //SUBSTITUI A MENOR NOTA
            if(notas[aluno][1] < notas[aluno][2]){
                notas[aluno][1] = notaSubstitutiva;
            }
            else{
                notas[aluno][2] = notaSubstitutiva;
            }

            //CALCULA NOVAMENTE A MEDIA
            notas[aluno][0] = notas[aluno][1] + notas[aluno][2];
        }
    }

    //MOSTRAR TODAS AS NOTAS ALUNO POR ALUNO
    for(aluno = 0; aluno < QtdAlunos; aluno++){

        printf("\nNotas do Aluno RGM %d\n", rgm[aluno]);
        printf("==================\n");
        printf("Nota A1: %0.1f\n", notas[aluno][1]);
        printf("Nota A2: %0.1f\n", notas[aluno][2]);
        printf("Media do aluno: %0.1f\n\n\n", notas[aluno][0]);
    }

    //MOSTRA OS ALUNOS QUE FORAM APROVADOS OU REPROVADOS
    for(aluno = 0; aluno < QtdAlunos; aluno++){

        if(notas[aluno][0] >= 12){
            printf("O aluno %d foi aprovado!\n", numAluno2);
        }
        else{
            printf("O aluno %d foi reprovado!\n", numAluno2);
        }

        numAluno2 += 1;
    }

    return 0;
}