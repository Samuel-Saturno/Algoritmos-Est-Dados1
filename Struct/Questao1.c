#include <stdio.h>
#include <stdlib.h>

typedef enum Genero{
    masculino,
    feminino
}genero;

typedef struct Pessoa{
    char nome[50];
    int idade;
    genero G;
}pessoa;

void Dados(pessoa * p){
    printf("Informe o nome: ");
    scanf(" %[^\n]", p->nome);
    printf("Informe a idade: ");
    scanf("%d", &p->idade);
    printf("Informe o genero [0- Masculino|1- Feminino]: ");
    scanf("%d", &p->G);
}

void Show(pessoa * p){
    printf("Seu nome e: %s\n", p->nome);
    printf("Sua idade e: %d\n", p->idade);
    printf("Seu genero e: %d\n", p->G);
}

int main(void){
    pessoa * p;
    //pessoa * p = malloc(sizeof(pessoa)); (utilizando alocação dinâmica na memória)
    Dados(&p);
    Show(&p);

    //free(p);
    return 0;
}
