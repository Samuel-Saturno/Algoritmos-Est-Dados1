#include <stdio.h>
#include <stdlib.h>

struct professor {
    char nome[40], email[50];
    int idade, mat;
  };

void preenche(struct professor *docente){
  printf("Digite o nome do professor: ");
  scanf(" %[^\n]", &estudante->nome);
  printf("Digite a idade do professor: ");
  scanf(" %[^\n]", &estudante->idade);
  printf("Digite a matricula do professor: ");
  scanf( "%[^\n]", &estudante->mat);
  printf("Digite o email do professor: ");
  scanf("%[^\n]", &estudante->email);
  printf("\n");
}

void imprime(struct professor *docente){
  printf("Nome: %s /n", docente->nome);
  printf("Idade: %d /n", docente->idade);
  printf("Matricula: %d /n", docente->mat);
  printf("Email: %s /n", docente->email);
}

//alocacao dinamica
int main(void){
  struct professor *docente = (struct docente *) malloc(sizeof(struct docente));
  if(docente == NULL){
    exit(1);
  }
  preenche(docente);
  imprime(docente);
  free(docente);
  
  return 0;
}
