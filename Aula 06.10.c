
/*
#include <stdio.h>

int main() {
    char nomes[3][30] = {"Ana", "Beatriz", "Eduardo"};
    float medias[3] = {9, 6.5, 7};

    int i;
    for (i = 0; i < 3; i++) {
        printf("Nome do Aluno(a): %s \n", nomes[i]);
        printf("Media Final: %1.f \n", medias[i]);
    }


    char produto[21];
    printf("Insira o nome do produto: ");
    scanf("%s", produto); //Não precisa do "&" agora.
    printf("O produto digitado foi: %s \n", produto);
    

    char emails[3][50];
    int e;
    for (e = 0; e < 3; e++) {
        printf("Digite um email: \n");
    gets (emails[e]);
    }

    printf("Os emails inseridos foram: ");
    for (e = 0; e < 3; e++) {
        printf("%s \n", emails[e]);
    }

    return 0;
}

*/

//FAÇA UM PROGRAMA QUE LEIA O NOME DE UMA PESSOA E EM SEGUIDA IMPRIMA UMA MENSAGEM: - FEITO
//V1. AGORA MOSTRE UMA LETRA DO NOME EM CADA LINHA - FEITO
//V2. INFORME SE O NOME DA PESSOA POSSUI A VOGAL 'A' - FEITO
//V3. CONTE QUANTAS VOGAIS 'A' O NOME DA PESSOA POSSUI - FEITO
//V4. CONTE QUANTAS VOGAIS (QUALQUER UMA DELAS) O NOME POSSUI - FEITO
//V5. MOSTRE O NOME DA PESSOA AO CONTRÁRIO. - FEITO
//V6. CRIE UM VETOR NOME2 E COPIE O NOME CAPTURADO PARA ESTE VETOR. - FEITO
//V7. CRIE OS VETORES PRIMEIRONOME E SOBRENOME. JOGUE AS PARTES DOS NOMES PARA OS RESPECTIVOS VETORES.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("clear");

    char nome[30];
    int i;
    int j;
    int encontrou = 0;
    int cont = 0;
    int tamanho = 0;
    char vogais[] = "aeiouAEIOU";
    char nome2[30];

    printf("Digite seu nome: ");
    gets(nome);

    strcpy(nome2, nome);

    
    tamanho = strlen(nome) - 1;

    printf("Ola %s! Seja bem-vindo ao programa!", nome);
    for (i = tamanho; i >= 0; i--) {
        printf("\n%c", nome[i]);
    }

    for (i = 0; i < nome[i]; i++) {
        for (j = 0; j < vogais[j]; j++) {
            if (nome[i] == vogais[j]) {
            encontrou = 1;
            cont++;
            }
        }
    }

    if(encontrou == 1) {
        printf("\nSeu nome tem %d vogal(s)", cont);
    }
    else {
        printf("\nSeu nome não tem a vogal");
    }

    printf("\nNome copiado: %s", nome2);

    return 0;
}