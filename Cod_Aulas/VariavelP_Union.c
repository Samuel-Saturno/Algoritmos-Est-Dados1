#include <stdio.h>
#include <stdlib.h>

// Estrutura para armazenar um documento por vez (apenas um é salvo)
typedef union documentos{
  char rg[15];
  char cpf[15];
}Documentos;

typedef struct pessoa{
  char nome [20];
  int idade;
  Documentos doc; // Variavel para armazenar o CPF ou RG
}Pessoa;

void dados_pessoa(Pessoa * p){
  //  Função que preenche os dados de uma variavel do tipo Pessoa (struct)
  printf("Informe o nome: \t");
  scanf(" %[^\n]", p->nome);
  printf("Informe a idade: \t");
  scanf("%d", &p->idade);
}

int main(void){
  Pessoa pessoa;
  dados_pessoa(&pessoa);
  
  return 0;
}
