/*
Crie um programa para calcular a área e o perímetro de um hexágono. O seu
programa deve implementar uma função chamada calcula_hexagono que calcula a área e o
perímetro de um hexágono regular de lado l. A função deve obedecer ao seguinte protótipo:
void calcula_hexagono(float l, float *area, float *perimetro); A área e o perímetro de um
hexágono regular são dados, respectivamente, por:

Para os cálculos, utilize as funções sqrt e pow do módulo math da biblioteca
padrão de C. Em seguida, crie a função principal do programa e utilize a função
calcula_hexagono para calcular a área e o perímetro de um hexágono de lado l
informado pelo usuário.
 */

//respostas: 

#include <stdio.h>
#include <locale.h>
#include <math.h>

void CalHex (float l, float *area, float *perimetro) {
    *area = (3 * pow(l, 2) * sqrt(3) / 2);
    *perimetro = 6 * l;
}

int main() {
    setlocale(LC_ALL, "portuguese");
    float lado, are, peri;

    printf("Informe o tamanho do lado do hexágano: ");
    scanf("%f", &lado);

    CalHex(lado, &are, &peri);

    printf("A área do hexágano %.3f e perímetro %.2f", are, peri);

    return 0;
}
