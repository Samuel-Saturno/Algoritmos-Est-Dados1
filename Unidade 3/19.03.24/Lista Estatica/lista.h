#include <stdlib.h>
#include <stdio.h>

typedef struct fila Fila;

Fila * adicionar_elemento(int MAX_SIZE);

void DestruirFila(Fila ** Q);

int FilaVazia(Fila * Q);

int FilaCheia(Fila * Q);

int FilaInsere(Fila * Q, int elem);

int RemoveFila(Fila * Q);

int ConsutaFila(Fila * Q, int * elem);
