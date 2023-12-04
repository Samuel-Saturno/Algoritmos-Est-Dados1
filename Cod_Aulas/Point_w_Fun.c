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

//Quando o "++" vem depois do "num" o resultado será 5 e não 6, porque o computador lê o código neste sentido ->
