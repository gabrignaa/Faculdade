#include <stdio.h>

/*
int main(){
    int voto = 0;

    printf("Escolha em quem votar:\n1- Ana\n2- Bob\nDigite seu voto: ");
    scanf("%d", &voto);

    switch(voto)
    {
        case 1: printf("\nO candidato escolhido é a Ana"); break;
        case 2: printf("\nO candidato escolhido é o Bob"); break;
        default: printf("\nOpção inválida!");
    }

    printf("Fim da votação");

    return 0;

}
*/

int main(){
    int voto = 0;

    printf("Escolha em quem votar:\n1- Ana\n2- Bob\nDigite seu voto: ");
    scanf("%d", &voto);

    if(voto == 1){
        printf("\nO candidato escolhido é a Ana");
    }
    else if(voto == 2){
        printf("\nO candidato escolhido é a Bob");
    }
    else{
        printf("\nVoto nulo!");
    }

    printf("\nFim da votação");

    return 0;

}

