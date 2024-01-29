#include <stdio.h>
#include <stdlib.h>


int main(void){
    FILE* fp;
    fp = fopen("entrada.txt","rt"); //Cria
    char c[20];
    // fp = fopen("entrada.txt","rt"); Lê o arquivo de Texto
    if(fp == NULL){
    printf("Erro na abertura do arquivo\n");
    exit(1);
    } else {
        printf("Arquivo foi criado\n");
    }
    
    fscanf(fp, "%s", c);
    printf("%s\n", c);
    
    if(fclose(fp)){
        printf("Arquivo fechado com sucesso\n");
    }

    return 0;
}
