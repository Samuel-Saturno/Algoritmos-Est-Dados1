#include <stdio.h>
#include <stdlib.h>

struct aluno {
    char nome[40], email[50];
    int idade, mat;
  };

void preenche(struct aluno *estudante){
  printf("Digite o nome do aluno: ");
  scanf(" %[^\n]", &estudante->nome);
  printf("Digite a idade do aluno: ");
  scanf(" %[^\n]", &estudante->idade);
  printf("Digite a matricula do aluno: ");
  scanf( "%[^\n]", &estudante->mat);
  printf("Digite o email do aluno: ");
  scanf(" %[^\n]", &estudante->email);
}

void imprime(struct aluno *estudante){
  printf("Nome: %s \n", estudante->nome);
  printf("Idade: %d \n", estudante->idade);
  printf("Matricula: %d \n", estudante->mat);
  printf("Email: %s \n", estudante->email);
}

// alocacao dinamica
int main(void){
  struct aluno *estudante = (struct aluno *) malloc(sizeof(struct aluno));
  if(estudante == NULL){
    exit(1);
  }
  preenche(estudante);
  imprime(estudante);
  free(estudante);
  //
  
  return 0;
}
