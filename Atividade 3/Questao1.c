#include <stdio.h>
#include <string.h>

// Definição da estrutura Funcionario
struct Funcionario {
    char nome[50];
    float salario;
    int identificador;
    char cargo[50];
};

// Função para preencher os campos da estrutura Funcionario
void preencherDados(struct Funcionario *funcionario) {
    printf("Digite o nome do funcionario: ");
    scanf("%s", funcionario->nome);

    printf("Digite o salario do funcionario: ");
    scanf("%f", &funcionario->salario);

    printf("Digite o identificador do funcionario: ");
    scanf("%d", &funcionario->identificador);

    printf("Digite o cargo do funcionario: ");
    scanf("%s", funcionario->cargo);
}

// Função para imprimir os valores dos campos da estrutura Funcionario
void imprimirDados(const struct Funcionario *funcionario) {
    printf("Nome: %s\n", funcionario->nome);
    printf("Salario: %.2f\n", funcionario->salario);
    printf("Identificador: %d\n", funcionario->identificador);
    printf("Cargo: %s\n", funcionario->cargo);
}

// Função para realizar uma alteração no salário de um Funcionario
void alterarSalario(struct Funcionario *funcionario, float novoSalario) {
    funcionario->salario = novoSalario;
}

// Função para encontrar o funcionário com maior e menor salário em um vetor
void encontrarSalariosExtremos(const struct Funcionario funcionarios[], int numFuncionarios) {
    float salarioMaximo = funcionarios[0].salario;
    float salarioMinimo = funcionarios[0].salario;
    int indiceMaximo = 0;
    int indiceMinimo = 0;

    for (int i = 1; i < numFuncionarios; ++i) {
        if (funcionarios[i].salario > salarioMaximo) {
            salarioMaximo = funcionarios[i].salario;
            indiceMaximo = i;
        }
        if (funcionarios[i].salario < salarioMinimo) {
            salarioMinimo = funcionarios[i].salario;
            indiceMinimo = i;
        }
    }

    printf("Funcionario com maior salario:\n");
    imprimirDados(&funcionarios[indiceMaximo]);

    printf("\nFuncionario com menor salario:\n");
    imprimirDados(&funcionarios[indiceMinimo]);
}

int main() {
    // Exemplo de uso das funções
    struct Funcionario funcionario1;
    preencherDados(&funcionario1);

    struct Funcionario funcionario2;
    preencherDados(&funcionario2);

    // Imprimir os dados dos funcionários
    printf("\nDados do Funcionario 1:\n");
    imprimirDados(&funcionario1);

    printf("\nDados do Funcionario 2:\n");
    imprimirDados(&funcionario2);

    // Alterar o salário do Funcionario 1
    alterarSalario(&funcionario1, 3000.0);
    printf("\nSalario do Funcionario 1 alterado:\n");
    imprimirDados(&funcionario1);

    // Encontrar os funcionários com maior e menor salário
    struct Funcionario funcionarios[] = {funcionario1, funcionario2};
    encontrarSalariosExtremos(funcionarios, 2);

    return 0;
}
