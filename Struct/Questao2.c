#include <stdio.h>
#include <stdlib.h>

typedef union TIPO{
    int alimento;
    int bebida;
    int eletronico;
}Tipo;


typedef struct PRODUTO{
    char nome[50];
    float val;
    Tipo tipo;
}Produto;

void Dados(Produto * p){
    printf("Informe seu nome: ");
    scanf(" %[^\n]", p->nome);
    printf("Informe o valor: ");
    scanf("%f", &p->val);
    printf("Informe o tipo [0- Alimento|1- Bebida|2- Eletronico]: ");
    scanf("%d", &p->tipo);
    if (tipo == 0){
        scanf("%d", p->tipo.alimento);
    } else if (tipo == 1){
        scanf("%d", p->tipo.bebida);
    } else{
        scanf("%d", p->tipo.eletronico);
    }
}

void Show(Produto * p){
    printf("Seu nome e: %s\n", p->nome);
    printf("O valor e: %f\n", p->val);
    printf("O tipo e: %d\n", p->tipo);
}

int main(void){
    Produto * p;

    Dados(&p);
    Show(&p);

    return 0;
}
