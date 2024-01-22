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

  printf("Digite 1 para CPF e 2 para RG");
  scanf("%d", &opcao);
  if(opcao){
    scanf(" %[^\n]", p->doc.cpf);
  } else{
    sacnf(" %[^\n}", p->doc.rg);
  }

  /*
  printf("%[^\n]", p->nome);
  printf("%d", p->idade);
  printf("%c", p->doc); //qual o % AQUI?
  */
}

int main(void){
  Pessoa pessoa;
  dados_pessoa(&pessoa);
  
  return 0;
}
