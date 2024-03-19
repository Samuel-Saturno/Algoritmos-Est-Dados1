#include "fila.h"

void main(){
    int elem;

    Fila * Q = CriaFila(50);

    DestruirFila(&Q);

    int vazia = FilaVazia(Q);

    int cheia = FilaCheia(Q);

    FilaInsere(Q, 10);

    RemoveFila(Q);

    ConsutaFila(Q, &elem);
}
