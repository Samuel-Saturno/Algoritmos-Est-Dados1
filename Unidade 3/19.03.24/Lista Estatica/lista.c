#include "fila.h"

struct fila{
   int ini, fim;
   int qtde;
   int MAX_SIZE;
   int *val;
};


Fila * CriaFila(int MAX_SIZE){
   Fila * Q = (Fila*) calloc(1, sizeof(Fila));

   Q->val = (int*) calloc(MAX_SIZE, sizeof(int));
   Q-> MAX_SIZE = MAX_SIZE;
   Q->qtde = 0;
   Q->ini = Q->fim = 0;

   return Q;
}

void DestruirFila(Fila ** Q){
   Fila * Qaux = *Q;
   free(Qaux->val);
   free(Qaux);
   *Q = NULL;
}

int FilaVazia(Fila * Q){
   return (Q->qtde == 0);
}

int FilaCheia(Fila * Q){
   return (Q->qtde == Q->MAX_SIZE);
}

int FilaInsere(Fila * Q, int elem){
   if (FilaCheia(Q)){
      printf("Warning: Fila cheia!\n");
      return 0;
   } else {
      Q->val[Q->fim] = elem;
      Q->fim = (Q->fim+1) % Q->MAX_SIZE;
      Q->qtde++;
      return 1;
   }  
}

int RemoveFila(Fila * Q){
   if(FilaVazia(Q)){
      printf("Wanning: Fila está vazia!\n");
      return 0;
   } else{
      Q->ini = (Q->ini + 1) % Q->MAX_SIZE;
      Q->qtde--;
      return 1;
   }
   
}

int ConsutaFila(Fila * Q, int * elem){
   if (FilaVazia(Q)){
      printf("Warnning: Fila vazia!\n");
      return 0;
   } else {
      *elem = Q->val[Q->ini];
      return 1;
   }
}
