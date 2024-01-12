#include <stdio.h>
#include <stdlib.h>

struct aluno {
    char nome[40];
    char email[50];
    int idade;
    int mat;
  };

int main(/*void*/){
  struct aluno estudante;
  printf("Digite o nome do aluno: ");
  scanf(" %s", &estudante.nome);
  printf("Digite a idade do aluno: ");
  scanf(" %d", &estudante.idade);
  printf("Digite a matricula do aluno: ");
  scanf(" %d", &estudante.mat);
  printf("Digite o email do aluno: ");
  scanf(" %s", &estudante.email);
  
  printf(" \n ");

  printf("Nome: %s \n", estudante.nome);
  printf("Idade: %d \n", estudante.idade);
  printf("Matricula: %d \n", estudante.mat);
  printf("Email: %s \n", estudante.email);
  
  //free(estudante);
  
  //return 0;
}

// erro de compilacao no free
