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
    printf("%c\n", c); //Imprime a string
    

    //Funções para ler dados
    //int fscanf (FILE* fp, char* formato, ...); //Ler um arquivo em um formato
    //int fgetc(FILE* fp); //Ler dados do arquivo pegando 1 único caractere que é o primeiro.
    //char* fgets(char* s, int n, FILE* fp); //Pega uma string e armazena uma variável indicando uma linha e mostrando o ponteiro q vc pegou o arquivo

    //fclose(fp); // Fecha arquivo do sistema operacional e não exclue
    
    if(fclose(fp)){
        printf("Arquivo fechado com sucesso\n");
    }

    return 0;
}
