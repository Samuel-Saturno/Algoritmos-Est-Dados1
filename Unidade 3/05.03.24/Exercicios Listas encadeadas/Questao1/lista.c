/*
Considere listas encadeadas de valores inteiros e implemente uma função para retornar o número de
nós da lista que possuem o campo info com
valore maiores do que n. Essa função deve obedecer ao prototipo: int maiores(Lista *l, int n);
*/
#include "lista.h"

typedef struct lista{
    int info;
    Lista * prox;
}Lista;

int insere_elemento(Lista * l, int n){
    // Realoca a memóra para o novo nó 
    Lista * newno = (Lista*)malloc(sizeof(Lista));
    if(newno == NULL){
        exit (1);
    }
    // Add novo valor no campo de informação
    newno->info = n;
    // Conecta o novo nó a lista
    newno->prox = l;

    return newno;
}

void imprime(Lista * l, int n){
    Lista * contador;
    for(contador = l; contador != NULL; contador = contador->prox){
        printf("%d\t", contador->info);
    }
}

Lista * vazia(Lista * l, int n){
    Lista * vz;
    if(vz == NULL){
        printf("A lista está vazia\n");
        return NULL;
    }
    if(vz->info == n){
        return vz;
    }

    return vazia;
}

Lista * lst_busca(Lista * l, int n){
    Lista* lst;
    for(lst = l; lst != NULL; lst = lst->prox){
        if(lst->info == n){
            return lst;
        }
    }
    return NULL;
}

int maiores(Lista * l, int n){
    Lista * vlis;
    int num;
    printf("Valores maiores que: ");
    scanf("%d", num);

    for(vlis = l; vlis != NULL; vlis = vlis->prox){
        if (vlis->info > num){
            printf("Os numeros maiores que %d na lista sao: %p\t", num, vlis->info);
        }
    }
}

void menu(){
    printf("=================================\t");
    printf("1- Adicionar novo no\t");
    printf("2 - Buscar valor\t");
    printf("3 - Buscar valores maiores que...\t");
    printf("=================================\n");
}
