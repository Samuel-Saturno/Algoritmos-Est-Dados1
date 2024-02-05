/*  TAD: Tipo Abstrato de Dados  */

/*  TAD: Novo tipo (struct) + conjunto de operações  */

#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>

struct aluno{
    char nome[20];
    int matricula;
    float ira;
};

Aluno* recebe_dados(void){
    Aluno* estudante = malloc(sizeof(Aluno));
    if(estudante == NULL){
        printf("Sem espaço na memoria!\n");
        exit(1);
    }
    printf("Nome do aluno: ");
    scanf(" %[^\n]", estudante->nome);
    printf("Matricula: ");
    scanf("%d", &estudante->matricula);
    printf("IRA: ");
    scanf("%f", &estudante->ira);
    
    return estudante;
}

//implementar uma função q exibe os dados do aluno e uma q libera
/*  Função q recebe um ponteiro para aluno  */
void Show(Aluno* est){
    printf("O nome do aluno: %s\n", est->nome);
    printf("A matricula: %d\n", est->matricula);
    printf("O IRA: %f\n", est->ira);
}

/*  Limpa memória   */
void Limpar(Aluno* cls){
    free(cls);
}
