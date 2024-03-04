#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;

/*  Inicializa atribuindo NULL | Retorna: lista inicializada    */
Lista * crialista(void);

/*  Insere novo elemento na lista
        @param Lista * lista;
        @param int valor: valor inteiro a ser inserido
    */
Lista * insere_elemento(Lista * lista, int valor);

void imprime(Lista * l);
