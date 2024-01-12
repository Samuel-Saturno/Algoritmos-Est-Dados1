#include <stdio.h>
#include <stdlib.h>

int main(void){
  char *nome = (char*) malloc(50*sizeof(char));
  if(nome == NULL){
    exit(1);
  }
  
  printf("Digite seu nome: ");
  scanf("%[^\n]s", nome);
  free(nome);
  return 0;
}
