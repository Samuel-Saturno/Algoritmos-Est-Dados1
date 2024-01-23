#include <stdio.h>
#include <stdlib.h>

//Maneira de definir constantes em C
#define TRUE 0
#define FALSE 1

int main(void){
    int resposta;

    printf("Você gosta de algoritmos? \n 0- True\n 1- False");
    scanf("%d", &resposta);
    if (resposta == TRUE){
        printf("Boa escolha\n");
    } else if (resposta == FALSE){
        printf("Que pena! \n");
    }

    return 0;
}
