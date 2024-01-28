#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constante simbólica para representar o número máximo de alunos
#define MAX_ALUNOS 50

// Definição da estrutura Aluno
typedef struct {
    int matricula;
    char nome[80];
    char turma;
    float notas[3];
    float media;
} Aluno;

// Protótipos das funções
void inicializa_alunos(Aluno** alunos, int n);
void matricula(int n, Aluno** alunos);
void lanca_notas(int n, Aluno** alunos);
void imprime_tudo(int n, Aluno** alunos);
void imprime_turma(int n, Aluno** alunos, char turma);
void imprime_turma_aprovados(int n, Aluno** alunos, char turma);

int main() {
    // Vetor de ponteiros para estrutura Aluno
    Aluno* alunos[MAX_ALUNOS];

    // Inicializa os alunos (todos NULL no início)
    inicializa_alunos(alunos, MAX_ALUNOS);

    // Realiza algumas operações de teste
    matricula(MAX_ALUNOS, alunos);
    lanca_notas(MAX_ALUNOS, alunos);

    // Imprime os dados de todos os alunos
    printf("Dados de todos os alunos:\n");
    imprime_tudo(MAX_ALUNOS, alunos);

    // Imprime os dados da turma 'A'
    printf("\nDados da turma 'A':\n");
    imprime_turma(MAX_ALUNOS, alunos, 'A');

    // Imprime os alunos aprovados da turma 'A'
    printf("\nAlunos aprovados da turma 'A':\n");
    imprime_turma_aprovados(MAX_ALUNOS, alunos, 'A');

    // Libera a memória alocada para os alunos
    for (int i = 0; i < MAX_ALUNOS; i++) {
        free(alunos[i]);
    }

    return 0;
}

// Implementação das funções

void inicializa_alunos(Aluno** alunos, int n) {
    for (int i = 0; i < n; i++) {
        alunos[i] = NULL;
    }
}

void matricula(int n, Aluno** alunos) {
    int matricula;
    char nome[80];
    char turma;

    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);

    // Verifica se a matrícula já foi utilizada
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL && alunos[i]->matricula == matricula) {
            printf("Matrícula já utilizada. Escolha outra matrícula.\n");
            return;
        }
    }

    // Encontra um ponteiro NULL no vetor de alunos
    for (int i = 0; i < n; i++) {
        if (alunos[i] == NULL) {
            alunos[i] = (Aluno*)malloc(sizeof(Aluno));

            // Preenche os dados do aluno
            alunos[i]->matricula = matricula;

            printf("Digite o nome do aluno: ");
            scanf("%s", nome);
            strcpy(alunos[i]->nome, nome);

            printf("Digite a turma do aluno: ");
            scanf(" %c", &turma);
            alunos[i]->turma = turma;

            // Inicializa as notas e a média com zero
            for (int j = 0; j < 3; j++) {
                alunos[i]->notas[j] = 0.0;
            }
            alunos[i]->media = 0.0;

            printf("Aluno matriculado com sucesso!\n");
            return;
        }
    }

    printf("Número máximo de alunos atingido. Não é possível matricular mais alunos.\n");
}

void lanca_notas(int n, Aluno** alunos) {
    int matricula;
    float nota;

    printf("Digite a matricula do aluno para lançar notas: ");
    scanf("%d", &matricula);

    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL && alunos[i]->matricula == matricula) {
            // Preenche as notas do aluno
            for (int j = 0; j < 3; j++) {
                printf("Digite a nota %d do aluno: ", j + 1);
                scanf("%f", &nota);
                alunos[i]->notas[j] = nota;
            }

            // Calcula a média do aluno
            alunos[i]->media = (alunos[i]->notas[0] + alunos[i]->notas[1] + alunos[i]->notas[2]) / 3.0;

            printf("Notas lançadas com sucesso!\n");
            return;
        }
    }

    printf("Aluno não encontrado.\n");
}

void imprime_tudo(int n, Aluno** alunos) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL) {
            printf("Matrícula: %d\n", alunos[i]->matricula);
            printf("Nome: %s\n", alunos[i]->nome);
            printf("Turma: %c\n", alunos[i]->turma);
            printf("Notas: %.2f, %.2f, %.2f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
            printf("Média: %.2f\n", alunos[i]->media);
            printf("\n");
        }
    }
}

void imprime_turma(int n, Aluno** alunos, char turma) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL && alunos[i]->turma == turma) {
            printf("Matrícula: %d\n", alunos[i]->matricula);
            printf("Nome: %s\n", alunos[i]->nome);
            printf("Turma: %c\n", alunos[i]->turma);
            printf("Notas: %.2f, %.2f, %.2f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
            printf("Média: %.2f\n", alunos[i]->media);
            printf("\n");
        }
    }
}

void imprime_turma_aprovados(int n, Aluno** alunos, char turma) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL && alunos[i]->turma == turma && alunos[i]->media >= 7.0) {
            printf("Matrícula: %d\n", alunos[i]->matricula);
            printf("Nome: %s\n", alunos[i]->nome);
            printf("Turma: %c\n", alunos[i]->turma);
            printf("Notas: %.2f, %.2f, %.2f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
            printf("Média: %.2f\n", alunos[i]->media);
            printf("\n");
        }
    }
}
