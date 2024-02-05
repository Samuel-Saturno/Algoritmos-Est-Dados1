#include "aluno.h"

int main(void){
    Aluno* aluno;
    aluno = recebe_dados();
    Show(aluno);
    Limpar(aluno);

    return 0;
}
