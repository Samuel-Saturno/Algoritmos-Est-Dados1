#include <stdio.h>
#include <math.h>

// Definição da estrutura para representar retângulos
typedef struct {
    float base;
    float altura;
} Retangulo;

// Definição da estrutura para representar círculos
typedef struct {
    float raio;
} Circulo;

// Estrutura que representa um ponto no plano
typedef struct {
    float x;
    float y;
} Ponto;

// Estrutura que representa um retângulo ou círculo (união de tipos)
typedef struct {
    char tipo; // 'R' para retângulo, 'C' para círculo
    union {
        Retangulo ret;
        Circulo circ;
    } forma;
} Forma;

// Protótipos das funções
Forma* ret_circunscrito(Circulo* c, float h);
Forma* circ_interno(Retangulo* r);

int main() {
    // Exemplo de uso:
    Circulo c = {5.0};  // Círculo com raio 5.0
    float altura_retangulo = 3.0;
    
    Forma* retangulo_circunscrito = ret_circunscrito(&c, altura_retangulo);
    
    if (retangulo_circunscrito != NULL) {
        printf("Retângulo circunscrito: base = %.2f, altura = %.2f\n",
               retangulo_circunscrito->forma.ret.base, retangulo_circunscrito->forma.ret.altura);
        free(retangulo_circunscrito);
    } else {
        printf("Erro ao criar retângulo circunscrito.\n");
    }

    // Exemplo de uso:
    Retangulo r = {6.0, 4.0};  // Retângulo com base 6.0 e altura 4.0
    
    Forma* circulo_interno = circ_interno(&r);
    
    if (circulo_interno != NULL) {
        printf("Círculo interno: raio = %.2f\n", circulo_interno->forma.circ.raio);
        free(circulo_interno);
    } else {
        printf("Erro ao criar círculo interno.\n");
    }

    return 0;
}

Forma* ret_circunscrito(Circulo* c, float h) {
    if (c == NULL || h <= 0 || h >= 2 * c->raio) {
        return NULL;  // Verifica parâmetros inválidos
    }

    // Calcula a largura do retângulo circunscrito (diâmetro do círculo)
    float largura = 2 * c->raio;

    // Calcula a altura do retângulo circunscrito (dada pelo parâmetro h)
    float altura = h;

    // Aloca memória para a estrutura Forma
    Forma* retangulo_circunscrito = (Forma*)malloc(sizeof(Forma));
    if (retangulo_circunscrito == NULL) {
        return NULL;  // Falha na alocação de memória
    }

    // Preenche os dados da estrutura Forma
    retangulo_circunscrito->tipo = 'R';
    retangulo_circunscrito->forma.ret.base = largura;
    retangulo_circunscrito->forma.ret.altura = altura;

    return retangulo_circunscrito;
}

Forma* circ_interno(Retangulo* r) {
    if (r == NULL || r->base <= 0 || r->altura <= 0) {
        return NULL;  // Verifica parâmetros inválidos
    }

    // Calcula o raio do círculo interno (mínimo entre base e altura dividido por 2)
    float raio = fmin(r->base, r->altura) / 2;

    // Aloca memória para a estrutura Forma
    Forma* circulo_interno = (Forma*)malloc(sizeof(Forma));
    if (circulo_interno == NULL) {
        return NULL;  // Falha na alocação de memória
    }

    // Preenche os dados da estrutura Forma
    circulo_interno->tipo = 'C';
    circulo_interno->forma.circ.raio = raio;

    return circulo_interno;
}
