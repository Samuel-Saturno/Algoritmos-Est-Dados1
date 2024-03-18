#include "pilha.h"

typedef struct pilha{
    int n;
    float * vet;

} Pilha;

Pilha* pilha_cria(void){
    Pilha * stack = (Pilha*) malloc(sizeof(Pilha));
    if (stack == NULL){
        exit(1);
    }

    stack->vet = (float*) malloc(N*sizeof(float));
    if (stack->vet == NULL){
        exit(1);
    }
    
    return stack;
}

void pilha_push(Pilha* p, float v){
    int index;
    
    for (index = 0;index < p->n;index++){
        printf("VALOR: %f\n", *p->vet[index]);
    }
}

float pilha_pop(Pilha* p){
    printf("O primeiro elemento é: %f", p->vet[0]);
}

int pilha_vazia(Pilha* p){
    char confirmacao[1];
    if (p == NULL){
        printf("Lista vazia!\n");
        printf("Deseja adicionar um valor na lista? [S/N]: ");
        scanf("%c", toupper(confirmacao));

        if (confirmacao == 'S'){
            Pilha* pilha_cria(void);
        }
    }
}

void pilha_libera(Pilha* p){
    

    free(p);
}
