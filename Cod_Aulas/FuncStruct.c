#include <stdio.h>
#include <stdlib.h>

struct leandro {
    char nome[40], email[50];
    int idade, CT;
  };

void preenche(struct leandro *funcionario){
  printf("Digite o nome do funcionario: ");
  scanf(" %[^\n]", &funcionario->nome);
  printf("Digite a idade do funcionario: ");
  scanf(" %[^\n]", &funcionario->idade);
  printf("Digite a matricula do funcionario: ");
  scanf( "%[^\n]", &funcionario->CT);
  printf("Digite o email do funcionario: ");
  scanf("%[^\n]", &funcionario->email);
  printf("\n");
}

void imprime(struct leandro *funcionario){
  printf("Nome: %s /n", funcionario->nome);
  printf("Idade: %d /n", funcionario->idade);
  printf("Matricula: %d /n", funcionario->CT);
  printf("Email: %s /n", funcionario->email);
}

//alocacao dinamica
int main(void){
  struct leandro *funcionario = (struct funcionario *) malloc(sizeof(struct funcionario));
  if(docente == NULL){
    exit(1);
  }
  preenche(funcionario);
  imprime(funcionario);
  free(funcionario);
  
  return 0;
}
