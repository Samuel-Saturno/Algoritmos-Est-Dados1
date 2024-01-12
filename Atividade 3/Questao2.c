#include <stdio.h>
#include <string.h>

// Definição da estrutura Pessoa
struct Pessoa {
    char nome[50];
    int numeroDocumento;
    int idade;
};

// Função para preencher os campos da estrutura Pessoa
void preencherDados(struct Pessoa *pessoa) {
    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa->nome);

    printf("Digite o numero do documento da pessoa: ");
    scanf("%d", &pessoa->numeroDocumento);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa->idade);
}

// Função para imprimir os valores dos campos da estrutura Pessoa
void imprimirDados(const struct Pessoa *pessoa) {
    printf("Nome: %s\n", pessoa->nome);
    printf("Numero do documento: %d\n", pessoa->numeroDocumento);
    printf("Idade: %d\n", pessoa->idade);
}

// Função para realizar uma atualização da idade de uma estrutura Pessoa
void atualizarIdade(struct Pessoa *pessoa, int novaIdade) {
    pessoa->idade = novaIdade;
}

// Função para encontrar a pessoa mais velha e mais nova em um vetor
void encontrarPessoasExtremas(const struct Pessoa pessoas[], int numPessoas) {
    int indiceMaisVelha = 0;
    int indiceMaisNova = 0;

    for (int i = 1; i < numPessoas; ++i) {
        if (pessoas[i].idade > pessoas[indiceMaisVelha].idade) {
            indiceMaisVelha = i;
        }
        if (pessoas[i].idade < pessoas[indiceMaisNova].idade) {
            indiceMaisNova = i;
        }
    }

    printf("Pessoa mais velha:\n");
    imprimirDados(&pessoas[indiceMaisVelha]);

    printf("\nPessoa mais nova:\n");
    imprimirDados(&pessoas[indiceMaisNova]);
}

int main() {
    // Exemplo de uso das funções
    struct Pessoa pessoa1;
    preencherDados(&pessoa1);

    struct Pessoa pessoa2;
    preencherDados(&pessoa2);

    // Imprimir os dados das pessoas
    printf("\nDados da Pessoa 1:\n");
    imprimirDados(&pessoa1);

    printf("\nDados da Pessoa 2:\n");
    imprimirDados(&pessoa2);

    // Atualizar a idade da Pessoa 1
    atualizarIdade(&pessoa1, 30);
    printf("\nIdade da Pessoa 1 atualizada:\n");
    imprimirDados(&pessoa1);

    // Encontrar a pessoa mais velha e mais nova
    struct Pessoa pessoas[] = {pessoa1, pessoa2};
    encontrarPessoasExtremas(pessoas, 2);

    return 0;
}
