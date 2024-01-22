#include <studio>
typedef struct pessoa{
  char nome [20];
  int idade;
}Pessoa;

void dados_pessoa(Pessoa * p){
  //  Função que preenche os dados de uma variavel do tipo Pessoa (struct)
  printf("Informe o nome: \t");
  scanf(" %[\n]", p->nome);
  printf("Informe a idade: \t");
  scanf("%d", &p->idade);
}

int main(void){
  Pessoa pessoa;
  dados_pessoa(&pessoa);
  
  return 0;
}
