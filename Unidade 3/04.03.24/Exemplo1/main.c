#include "lista.h"

int main(void){
    // Criando uma lista encadeada
    Lista * lista_encadeada = cria_lista();
    // Inserindo o valor 3 na lista encadeada
    lista_encadeada = insere_elemento(lista_encadeada, 3);
    return 0;
}
