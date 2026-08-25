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


int main(){
    int voto = 0;

    printf("Escolha em quem votar:\n1- Ana\n2- Bob\n3- Carla\n4- Douglas\n5- Eduardo\n6- Fabi\n7- Gabi\nDigite seu voto: ");
    scanf("%d", &voto);

    if(voto == 1){
        printf("\nO candidato escolhido é a Ana");
    }
    else if(voto == 2){
        printf("\nO candidato escolhido é a Bob");
    }
    else if(voto == 3){
        printf("\nO candidato escolhido é a Carla");
    }
    else if(voto == 4){
        printf("\nO candidato escolhido é a Douglas");
    }
    else if(voto == 5){
        printf("\nO candidato escolhido é a Eduardo");
    }
    else if(voto == 6){
        printf("\nO candidato escolhido é a Fabi");
    }
    else if(voto == 7){
        printf("\nO candidato escolhido é a Gabi");
    }
    else{
        printf("\nVoto nulo!");
    }

    printf("\nFim da votação");

    return 0;

}

*/

int main(){
    int voto = 0;
    int voto2 = 0;
    int voto3 = 0;

    int votoAna = 0;
    int votoBob = 0;
    int votoCarla = 0;
    int votoDouglas = 0;
    int votoEduardo = 0;
    int votoFabi = 0;
    int votoGabi = 0;
    int votoNulo = 0;


    printf("(1 voto) Escolha em quem votar:\n1- Ana\n2- Bob\n3- Carla\n4- Douglas\n5- Eduardo\n6- Fabi\n7- Gabi\nDigite seu voto: ");
    scanf("%d", &voto);

    if(voto == 1){
        printf("\nO candidato escolhido e a Ana\n");
        votoAna = votoAna + 1;
    }
    else if(voto == 2){
        printf("\nO candidato escolhido e a Bob\n");
        votoBob = votoBob + 1;
    }
    else if(voto == 3){
        printf("\nO candidato escolhido e a Carla\n");
        votoCarla = votoCarla +1;
    }
    else if(voto == 4){
        printf("\nO candidato escolhido e a Douglas\n");
        votoDouglas = votoDouglas + 1;
    }
    else if(voto == 5){
        printf("\nO candidato escolhido e a Eduardo\n");
        votoEduardo = votoEduardo +1;
    }
    else if(voto == 6){
        printf("\nO candidato escolhido e a Fabi\n");
        votoFabi = votoFabi + 1;
    }
    else if(voto == 7){
        printf("\nO candidato escolhido e a Gabi\n");
        votoGabi = votoGabi + 1;
    }
    else{
        printf("\nVoto nulo!");
        votoNulo = votoNulo +1;
    }

    printf("\n(2 voto) Escolha em quem votar:\n1- Ana\n2- Bob\n3- Carla\n4- Douglas\n5- Eduardo\n6- Fabi\n7- Gabi\nDigite seu voto: ");
    scanf("%d", &voto2);

    if(voto2 == 1){
        printf("\nO candidato escolhido e a Ana\n");
        votoAna = votoAna + 1;
    }
    else if(voto2 == 2){
        printf("\nO candidato escolhido e a Bob\n");
        votoBob = votoBob + 1;
    }
    else if(voto2 == 3){
        printf("\nO candidato escolhido e a Carla\n");
        votoCarla = votoCarla +1;
    }
    else if(voto2 == 4){
        printf("\nO candidato escolhido e a Douglas\n");
        votoDouglas = votoDouglas + 1;
    }
    else if(voto2 == 5){
        printf("\nO candidato escolhido e a Eduardo\n");
        votoEduardo = votoEduardo +1;
    }
    else if(voto2 == 6){
        printf("\nO candidato escolhido e a Fabi\n");
        votoFabi = votoFabi + 1;
    }
    else if(voto2 == 7){
        printf("\nO candidato escolhido e a Gabi\n");
        votoGabi = votoGabi + 1;
    }
    else{
        printf("\nVoto nulo!");
        votoNulo = votoNulo +1;
    }

        printf("\n(3 voto) Escolha em quem votar:\n1- Ana\n2- Bob\n3- Carla\n4- Douglas\n5- Eduardo\n6- Fabi\n7- Gabi\nDigite seu voto: ");
    scanf("%d", &voto3);

    if(voto3 == 1){
        printf("\nO candidato escolhido e a Ana\n");
        votoAna = votoAna + 1;
    }
    else if(voto3 == 2){
        printf("\nO candidato escolhido e a Bob\n");
        votoBob = votoBob + 1;
    }
    else if(voto3 == 3){
        printf("\nO candidato escolhido e a Carla\n");
        votoCarla = votoCarla +1;
    }
    else if(voto3 == 4){
        printf("\nO candidato escolhido e a Douglas\n");
        votoDouglas = votoDouglas + 1;
    }
    else if(voto3 == 5){
        printf("\nO candidato escolhido e a Eduardo\n");
        votoEduardo = votoEduardo +1;
    }
    else if(voto3 == 6){
        printf("\nO candidato escolhido e a Fabi\n");
        votoFabi = votoFabi + 1;
    }
    else if(voto3 == 7){
        printf("\nO candidato escolhido e a Gabi\n");
        votoGabi = votoGabi + 1;
    }
    else{
        printf("\nVoto nulo!");
        votoNulo = votoNulo +1;
    }


    if(votoAna > votoBob){
        if(votoAna > votoCarla){
            if(votoAna > votoDouglas){
                if(votoAna > votoEduardo){
                    if(votoAna > votoFabi){
                        if(votoAna > votoGabi){
                            printf("A Ana vencou a eleicao.");
                        }
                    }
                }
            }
        }
    }

    if(votoBob > votoAna){
        if(votoBob > votoCarla){
            if(votoBob > votoDouglas){
                if(votoBob > votoEduardo){
                    if(votoBob > votoFabi){
                        if(votoBob > votoGabi){
                            printf("O Bob vencou a eleicao.");
                        }
                    }
                }
            }
        }
    }

    if(votoCarla > votoAna){
        if(votoCarla > votoBob){
            if(votoCarla > votoDouglas){
                if(votoCarla > votoEduardo){
                    if(votoCarla > votoFabi){
                        if(votoCarla > votoGabi){
                            printf("A Carla vencou a eleicao.");
                        }
                    }
                }
            }
        }
    }

    if(votoDouglas > votoAna){
        if(votoDouglas > votoBob){
            if(votoDouglas > votoCarla){
                if(votoDouglas > votoEduardo){
                    if(votoDouglas > votoFabi){
                        if(votoDouglas > votoGabi){
                            printf("O Douglas vencou a eleicao.");
                        }
                    }
                }
            }
        }
    }

    if(votoEduardo > votoAna){
        if(votoEduardo > votoBob){
            if(votoEduardo > votoCarla){
                if(votoEduardo > votoDouglas){
                    if(votoEduardo > votoFabi){
                        if(votoEduardo > votoGabi){
                            printf("O Eduardo vencou a eleicao.");
                        }
                    }
                }
            }
        }
    }

    if(votoFabi > votoAna){
        if(votoFabi > votoBob){
            if(votoFabi > votoCarla){
                if(votoFabi > votoDouglas){
                    if(votoFabi > votoEduardo){
                        if(votoFabi > votoGabi){
                            printf("A Fabi vencou a eleicao.");
                        }
                    }
                }
            }
        }
    }

    if(votoGabi > votoAna){
        if(votoGabi > votoBob){
            if(votoGabi > votoCarla){
                if(votoGabi > votoDouglas){
                    if(votoGabi > votoEduardo){
                        if(votoGabi > votoFabi){
                            printf("A Gabi vencou a eleicao.");
                        }
                    }
                }
            }
        }
    }

    if(votoNulo > votoAna){
        if(votoNulo > votoBob){
            if(votoNulo > votoCarla){
                if(votoNulo > votoDouglas){
                    if(votoNulo > votoEduardo){
                        if(votoNulo > votoFabi){
                            if(votoNulo > votoGabi){
                               printf("\nNinguem ganhou, a maioria votou nulo!"); 
                            }
                        }
                    }
                }
            }
        }
    }


    printf("\nAna = %d\n", votoAna);
    printf("Bob = %d\n", votoBob);
    printf("Carla = %d\n", votoCarla);
    printf("Douglas = %d\n", votoDouglas);
    printf("Eduardo = %d\n", votoEduardo);
    printf("Fabi = %d\n", votoFabi);
    printf("Gabi = %d\n", votoGabi);
    printf("nulo = %d\n", votoNulo);



    printf("\nFim da votacao");

    return 0;

}

