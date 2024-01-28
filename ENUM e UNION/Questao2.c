#include <stdio.h>

// Enum para representar os tipos de produto
typedef enum {
    ALIMENTO,
    BEBIDA,
    ELETRONICO
} TipoProduto;

// Union para armazenar um dos tipos de produto
typedef union {
    char alimento_info[50];
    char bebida_info[50];
    char eletronico_info[50];
} InfoProduto;

// Struct para representar um produto
typedef struct {
    char nome[50];
    float preco;
    TipoProduto tipo;
    InfoProduto info;
} Produto;

int main() {
    // Declaração de uma variável do tipo Produto
    Produto produto;

    // Leitura dos dados do produto
    printf("Digite o nome do produto: ");
    scanf("%s", produto.nome);

    printf("Digite o preço do produto: ");
    scanf("%f", &produto.preco);

    printf("Digite o tipo do produto (0 para ALIMENTO, 1 para BEBIDA, 2 para ELETRONICO): ");
    int tipoDigitado;
    scanf("%d", &tipoDigitado);

    // Validação do tipo digitado
    if (tipoDigitado >= ALIMENTO && tipoDigitado <= ELETRONICO) {
        produto.tipo = (TipoProduto)tipoDigitado;
    } else {
        printf("Tipo inválido para o produto. Usando ALIMENTO como padrão.\n");
        produto.tipo = ALIMENTO;
    }

    // Leitura dos dados específicos de cada tipo de produto usando a union
    switch (produto.tipo) {
        case ALIMENTO:
            printf("Digite informações específicas para ALIMENTO: ");
            scanf("%s", produto.info.alimento_info);
            break;
        case BEBIDA:
            printf("Digite informações específicas para BEBIDA: ");
            scanf("%s", produto.info.bebida_info);
            break;
        case ELETRONICO:
            printf("Digite informações específicas para ELETRONICO: ");
            scanf("%s", produto.info.eletronico_info);
            break;
    }

    // Impressão dos dados do produto
    printf("\nDados do produto:\n");
    printf("Nome: %s\n", produto.nome);
    printf("Preço: %.2f\n", produto.preco);
    printf("Tipo: %s\n", (produto.tipo == ALIMENTO) ? "ALIMENTO" : 
                       (produto.tipo == BEBIDA) ? "BEBIDA" : "ELETRONICO");

    // Impressão das informações específicas de cada tipo de produto usando a union
    switch (produto.tipo) {
        case ALIMENTO:
            printf("Informações específicas para ALIMENTO: %s\n", produto.info.alimento_info);
            break;
        case BEBIDA:
            printf("Informações específicas para BEBIDA: %s\n", produto.info.bebida_info);
            break;
        case ELETRONICO:
            printf("Informações específicas para ELETRONICO: %s\n", produto.info.eletronico_info);
            break;
    }

    return 0;
}
