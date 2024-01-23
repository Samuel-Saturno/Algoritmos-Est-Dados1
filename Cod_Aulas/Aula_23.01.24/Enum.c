#include <stdio.h>
#include <stdlib.h>

// Enumeração
typedef enum bool{
    true, //primeiro valor é automaticamente 0
    false // o segundo é 1 (e assim por diante)
}Bool;

int main(void){
    Bool resposta;
    printf("Você gosta de algoritmos? \n 0- True\n 1- False");
    scanf("%d", &resposta);
    if (resposta == true){
        printf("Boa escolha\n");
    } else if (resposta == false){
        printf("Que pena! \n");
    }

    return 0;
}
