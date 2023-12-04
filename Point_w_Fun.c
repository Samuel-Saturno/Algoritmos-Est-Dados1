#include <stdio.h>

int imc (int num) {
    return (++num);
}

int main(void) {
    int numero = 5;
    numero = imc (numero);
    printf("%d", numero);
    return 0;
}
