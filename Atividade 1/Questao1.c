//Implemente uma funcao que receba como parametro um vetor de numeros inteiros (vet) de tamanho
//n e inverta a ordem dos elementos armazenados nesse vetor.

#include <stdio.h>

int main () {
  int vetOg[n], vetInv[n];
  int x, y, n;

  printf("Informe o numero de vetores: ");
  scanf("%d", &n);

  for (x = 0; x <= n; x++) {
    printf("Digite um numero: ");
    scanf("%d", &vetOg[x]);
  }

  for (y = 0; y >= n; y--) {
    vetInv[x] = vetOg[y];
    printf("O vetor invertido é: %d", vetInv[x]);
  }
}
