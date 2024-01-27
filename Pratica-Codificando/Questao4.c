#include <stdio.h>

int somaEntreNumeros(int num1, int num2) {
    // Verifica se num1 é menor que num2
    if (num1 > num2) {
        // Troca os valores se estiverem fora de ordem
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    int soma = 0;

    // Loop para somar os números entre num1 e num2 (inclusive)
    for (int i = num1; i <= num2; i++) {
        soma += i;
    }

    return soma;
}

int main() {
    // Exemplo de uso da função
    int resultado = somaEntreNumeros(3, 7);

    printf("A soma dos números entre 3 e 7 é: %d\n", resultado);

    return 0;
}
