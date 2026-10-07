#include <stdio.h>

int main(){
    
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