#include <stdio.h>

// Definição da estrutura Ingresso
typedef struct {
    float preco;
    char local[50];
    char atracao[50];
} Ingresso;

// Protótipos das funções
void preenche(Ingresso* i);
void imprime(Ingresso* i);
void altera_preco(Ingresso* i, float valor);
void imprime_menor_maior_preco(int n, Ingresso* vet);

int main() {
    // Teste das funções
    int n = 3; // Número de ingressos no vetor
    Ingresso ingressos[n];

    // Preenchendo os ingressos
    for (int i = 0; i < n; i++) {
        printf("Ingresso %d:\n", i + 1);
        preenche(&ingressos[i]);
        printf("\n");
    }

    // Imprimindo os ingressos
    printf("Ingressos:\n");
    for (int i = 0; i < n; i++) {
        imprime(&ingressos[i]);
    }

    // Alterando o preço do primeiro ingresso
    altera_preco(&ingressos[0], 50.0);

    // Imprimindo os ingressos novamente
    printf("\nIngressos (após alteração de preço):\n");
    for (int i = 0; i < n; i++) {
        imprime(&ingressos[i]);
    }

    // Imprimindo o evento de ingresso mais barato e mais caro
    printf("\nEventos de ingresso mais barato e mais caro:\n");
    imprime_menor_maior_preco(n, ingressos);

    return 0;
}

// Implementação das funções

void preenche(Ingresso* i) {
    printf("Digite o preço do ingresso: ");
    scanf("%f", &(i->preco));

    printf("Digite o local do evento: ");
    scanf("%s", i->local);

    printf("Digite a atração do evento: ");
    scanf("%s", i->atracao);
}

void imprime(Ingresso* i) {
    printf("Preço: %.2f\n", i->preco);
    printf("Local: %s\n", i->local);
    printf("Atração: %s\n", i->atracao);
    printf("\n");
}

void altera_preco(Ingresso* i, float valor) {
    i->preco = valor;
}

void imprime_menor_maior_preco(int n, Ingresso* vet) {
    int indice_menor_preco = 0;
    int indice_maior_preco = 0;

    for (int i = 1; i < n; i++) {
        if (vet[i].preco < vet[indice_menor_preco].preco) {
            indice_menor_preco = i;
        }

        if (vet[i].preco > vet[indice_maior_preco].preco) {
            indice_maior_preco = i;
        }
    }

    printf("Evento mais barato:\n");
    imprime(&vet[indice_menor_preco]);

    printf("\nEvento mais caro:\n");
    imprime(&vet[indice_maior_preco]);
}
