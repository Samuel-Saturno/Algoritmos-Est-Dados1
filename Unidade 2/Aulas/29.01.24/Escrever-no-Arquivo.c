#include <stdio.h>
#include <stdlib.h>


int main(void){
    FILE* fp;
    fp = fopen("entrada.txt","w"); //Cria
    if(fp == NULL){
    printf("Erro na abertura do arquivo\n");
    exit(1);
    } else {
        printf("Arquivo foi criado\n");
    }

    //fputc('A', fp); //Só premite um caractere
    //fputs("Hello world", fp); //Permite escrever uma mensagem
    fprintf(fp, "Texto Ben 10");

    if(fclose(fp)){
        printf("Arquivo fechado com sucesso\n");
    }

    return 0;
}
