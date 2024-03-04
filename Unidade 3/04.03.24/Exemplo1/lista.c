#include "lista.h"

typedef struct lista{
    int info;
    Lista * prox;
}Lista;

/*  Função que inicializa a lista atribuindo Null   */
Lista * cria_lista(void){
    return NULL;
}

Lista * insere_elemento(Lista * lista, int valor){
    // Aloca novo nó da lista encadeada
    Lista * novo_no = (Lista*) malloc(sizeof(Lista));
    if(novo_no == NULL){
        exit(1);
    }
    // Adiciona o valor no campo informação
    novo_no->info = valor;
    // Conecta o novo nó a lista
    novo_no->prox = lista;

    return novo_no;
}

void imprime(Lista * l) {
    Lista * contador;
    for(contador = l; contador != NULL; contador = contador->prox){
        printf("%d\t", contador->info);
    }
}

Lista * vazia(Lista * lista, int vn);

Lista * lst_busca(Lista* lista, int valor){
    Lista* p;
    for(p = l; p != NULL; p = p->prox){
        if(p->info == valor){
            return p;
        }
    }
    return NULL;
}
