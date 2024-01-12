#include <stdio.h>

int soma (int a, int b) {
  return a + b;
}

int subtracao (int c, int d) {
    return c - d;
}

int multiplicacao (int e, int f) {
    return e * f;
}

int divisao (int g, int h) {
    return g / h;
}

int calcula (int x, int y, int (*operacao)(int, int)) {
  return (*operacao)(x, y);
}

int main() {
  int resultado = calcula(5, 3, divisao);
  printf("Resultado: %d", resultado);

  return 0;
}
