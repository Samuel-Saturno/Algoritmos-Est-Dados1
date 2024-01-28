#include <stdio.h>

// Enum para representar os valores do gênero
typedef enum {
    MASCULINO,
    FEMININO
} Genero;

// Struct para representar uma pessoa
typedef struct {
    char nome[50];
    int idade;
    Genero genero;
} Pessoa;

int main() {
    // Declaração de uma variável do tipo Pessoa
    Pessoa pessoa;

    // Leitura dos dados da pessoa
    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa.nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa.idade);

    printf("Digite o gênero da pessoa (0 para MASCULINO, 1 para FEMININO): ");
    int generoDigitado;
    scanf("%d", &generoDigitado);

    // Validação do gênero digitado
    if (generoDigitado == MASCULINO || generoDigitado == FEMININO) {
        pessoa.genero = (Genero)generoDigitado;
    } else {
        printf("Valor inválido para o gênero. Usando MASCULINO como padrão.\n");
        pessoa.genero = MASCULINO;
    }

    // Impressão dos dados da pessoa
    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Gênero: %s\n", (pessoa.genero == MASCULINO) ? "MASCULINO" : "FEMININO");

    return 0;
}
