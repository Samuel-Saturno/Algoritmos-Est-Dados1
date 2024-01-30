#include <stdio.h>
#include <stdlib.h>


int main(void){
    FILE* fp;
    fp = fopen("entrada.txt","rt"); //Cria
    // fp = fopen("entrada.txt","rt"); Lê o arquivo de Texto
    if(fp == NULL){
    printf("Erro na abertura do arquivo\n");
    exit(1);
    } else {
        printf("Arquivo foi criado\n");
    }

    c = fgets(fp); //Lê uma linha do arquivo
    printf("%s\n", c); //Imprime a string
    
    if(fclose(fp)){
        printf("Arquivo fechado com sucesso\n");
    }

    return 0;
}
