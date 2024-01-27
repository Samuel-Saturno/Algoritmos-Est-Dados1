#include <stdio.h>

void inverterVetor(int vet[], int tamanho) {
    int i, temp;
    for (i = 0; i < tamanho / 2; i++) {
        // Troca os elementos simétricos em relação ao centro
        temp = vet[i];
        vet[i] = vet[tamanho - 1 - i];
        vet[tamanho - 1 - i] = temp;
    }
}

int main() {
    // Exemplo de uso
    int vetorExemplo[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetorExemplo) / sizeof(vetorExemplo[0]);

    // Chama a função para inverter o vetor
    inverterVetor(vetorExemplo, tamanho);

    // Exibe o vetor invertido
    printf("Vetor invertido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorExemplo[i]);
    }

    return 0;
}
