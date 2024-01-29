#include <stdio.h>
#include <stdlib.h>


int main(void){

FILE* fp;
fp = fopen("entrada.txt","wt"); //Cria
// fp = fopen("entrada.txt","rt"); Lê o arquivo de texto
if(fp == NULL){
  printf("Erro na abertura do arquivo\n");
  exit(1);
} else {
    printf("Arquivo foi criado\n");
}

//fclose(fp); // Fecha o arquivo do sistema operacional e não exclue
if(fclose(fp)){
        printf("Arquivo fechado com sucesso\n");
}

return 0;
}
