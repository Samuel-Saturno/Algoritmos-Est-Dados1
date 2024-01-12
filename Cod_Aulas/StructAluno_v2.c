#include <stdio.h>
#include <stdlib.h>

/*Exemplo de ANINHAMENTO DE ESTRUTURAS */

typedef struct discuplina{
    char nome [20];
    float nota;
    int codigo;
}Disciplina;

typedef struct aluno{
    char nome [35];
    int idade;
    int matricula;
    //Disciplina materias[10];
    Disciplina * materias;  //Aninhamento de estruturas (uma estrutura dentro de outra)
}Aluno;

int main(){
    /*Aluno aluno;
    //aluno.nome = "Cleber";
    aluno.idade = 19;
    aluno.matricula = 202302;
    aluno.materias->codigo = 1;
    aluno.materias->nota = 9.8;

    printf("Idade: %d\nMatricula: %d\nCodigo: %d", aluno.idade, aluno.matricula, aluno.materias->codigo);
    */

   Aluno * aluno = (Aluno*) malloc(sizeof(Aluno));
   if(aluno == NULL){
       exit(1);
   }

   aluno->materias = (Disciplina*) malloc(2*sizeof(Disciplina)); //numero e a quantidade de valores
   if (aluno->materias == NULL){
       exit(1);
   }
   
   printf("Informe os dados do aluno: nome, idade e matricula\n");
   scanf(" %[^\n]", aluno->nome);
   scanf("%d %d", &aluno->idade, &aluno->matricula);

    //Cadastro das Disciplinas
    int index;
    for(index = 0; index < 2; index++){
        printf("Cadastro da disciplina %d", index+1);
        printf("Nome da Materia: ");
        scanf(" %[^\n]", aluno->materias[index].nome);
        printf("Codigo: ");
        scanf("%d %d", &aluno->materias[index].codigo);
        printf("Nota: ");
        scanf("%d", &aluno->materias[index].nota);
    }
    
    return 0;
}
