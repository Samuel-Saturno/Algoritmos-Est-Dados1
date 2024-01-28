#include <stdio.h>

// Enum para representar os meses
typedef enum {
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
} Mes;

// Struct para representar uma data
typedef struct {
    int dia;
    Mes mes;
    int ano;
} Data;

// Função para obter o nome do mês a partir do enum
const char* obter_nome_mes(Mes mes) {
    switch (mes) {
        case JANEIRO: return "Janeiro";
        case FEVEREIRO: return "Fevereiro";
        case MARCO: return "Março";
        case ABRIL: return "Abril";
        case MAIO: return "Maio";
        case JUNHO: return "Junho";
        case JULHO: return "Julho";
        case AGOSTO: return "Agosto";
        case SETEMBRO: return "Setembro";
        case OUTUBRO: return "Outubro";
        case NOVEMBRO: return "Novembro";
        case DEZEMBRO: return "Dezembro";
        default: return "Mês inválido";
    }
}

int main() {
    // Declaração de uma variável do tipo Data
    Data data;

    // Leitura dos dados da data
    printf("Digite o dia: ");
    scanf("%d", &data.dia);

    printf("Digite o mês (1 a 12): ");
    scanf("%d", (int*)&data.mes);

    printf("Digite o ano: ");
    scanf("%d", &data.ano);

    // Validando a entrada para o mês
    if (data.mes < JANEIRO || data.mes > DEZEMBRO) {
        printf("Mês inválido. Usando Janeiro como padrão.\n");
        data.mes = JANEIRO;
    }

    // Impressão dos dados da data no formato dd/mm/aaaa
    printf("\nData: %02d/%02d/%04d\n", data.dia, data.mes, data.ano);
    printf("Mês por extenso: %s\n", obter_nome_mes(data.mes));

    return 0;
}
