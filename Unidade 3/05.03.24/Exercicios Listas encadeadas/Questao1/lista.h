#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;

/*
@brief Esta função insere novos elementos

@param
*/
int insere_elemento(Lista * l, int n);

/*
@brief Esta fução imprime os elementos da lista encadeada
*/
void imprime(Lista * l, int n);

/*
@brief Esta função verifica se a lista está vazia
*/
Lista * vazia(Lista * l, int n);

/*
@brief Esta função verifica a última busca
*/
Lista * lst_busca(Lista* l, int n);

/*
@brief Esta função busca e mostra valores na lista maiores que o parâmetro

@param os valores mostrados são maiores que 'n'
*/
int maiores(Lista * l, int n);

/*
@brief Apenas para imprimir o menu
*/
void menu();
