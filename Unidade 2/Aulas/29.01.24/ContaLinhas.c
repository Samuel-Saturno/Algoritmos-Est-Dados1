#include <stdio.h>

int main(void){
    int c;
    int nlinhas = 0;
    FILE* fp;
    fp = fopen("entrada.txt", "rt"); //Abre o arquivo de leitura
    if(fp == NULL){
        printf("Nao foi possivel abrir o arquivo");
        return 1;
    }
    while ((c = fgetc(fp)) != EOF){
        if (c == '\n')
            nlinhas++;
    }
    fclose(fp); //Fecha o arquivo
    printf("Numero de linhas = %d\n", nlinhas); //Exibe o resultado na tela
    
    return 0;
}
