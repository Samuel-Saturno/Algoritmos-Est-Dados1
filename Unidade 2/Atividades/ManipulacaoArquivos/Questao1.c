#include <stdio.h>
#include <stdlib.h>

int main(void){
    /*  Variáveis   */
    char le[50];
    char ls[50];
    char nomes[40];
    int ln = 0;
    int n1;
    int n2;
    int n3;


    /*  Arquivo de entrada  */
    FILE* turmaE = fopen("entrada_q3.txt", "rt");
    if (turmaE == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    } else{
        printf("Arquivo criado com sucesso!\n");
    }

    /*  Arquivo de saída  */
    FILE* turmaS = fopen("saida_q3.txt", "wt");
    if (turmaS == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(2);
    } else{
        printf("Arquivo criado com sucesso!\n");
    }

    /*  Ler dados   */
    while ((fguets(le, 50, turmaE)) != EOF){ // Dúvida nesse while
        // Processar dados


        if (le == "\n"){
            ln++;
        }
    }

    /*  Fecha arquivos  */
    // Entrada
    if (fclose(turmaE)){
        printf("Execucao de arquivo encerrada!\n");
    }
    // Saída
    if (fclose(turmaS)){
            printf("Execucao de arquivo encerrada!\n");
    }
    
    return 0;
}
