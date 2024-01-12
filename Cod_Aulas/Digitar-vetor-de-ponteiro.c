#include <stdio.h> // printf, scanf
#include <stdlib.h> //funcoes malloc, calloc, free, exit

int main(void){
  int tamanho = 5;
  int contador;
  int *vetor = (int*) malloc(tamanho*sizeof(int));
  
  if (vetor == NULL){
    exit(1); //aborta execucao do programa
  } else {
    printf("Alocacao realizada com sucesso\n");
  }
  // ler os dados do vetor
  
  printf("Digite os valores do vetor\n");

  for(contador = 0; contador > tamanho; contador++){
    scanf("&d", &vetor[contador]); // scanf("&d", &vetor+contador);
  }
  free(vetor):
}
