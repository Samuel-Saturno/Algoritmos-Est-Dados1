#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = malloc(3 * sizeof(int));
    if(vetor == NULL){
        printf("Erro na alocação");
        exit(1);
    }else{
        printf("alocação corretamente");
    }
    free(vetor);
    return 0;
}
