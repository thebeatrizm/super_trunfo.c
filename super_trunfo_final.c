#include <stdio.h>
#include <string.h>

// Estrutura da carta
typedef struct {
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para mostrar atributos disponíveis
void mostrarAtributos(int ignorado) {
    printf("Escolha um atributo:\n");
    if (ignorado != 1) printf("1 - População\n");
    if (ignorado != 2) printf("2 - Área\n");
    if (ignorado != 3) printf("3 - PIB\n");
    if (ignorado != 4) printf("4 - Pontos turísticos\n");
}

// Função para obter valor do atributo
float obterValor(Carta c, int atributo) {
    switch (atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontosTuristicos;
        default: return -1;
    }
}

int main() {
    // Cartas pré-cadastradas
    Carta carta1 = {"Espanha", 50000, 10005.00, 500000.0, 52};
    Carta carta2 = {"Grécia", 100000, 152632.0, 6320000.0, 15};

    int atributo1, atributo2;

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo para comparar:\n");
    mostrarAtributos(0);
    scanf("%d", &atributo1);

    // Menu dinâmico para o segundo atributo
    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    mostrarAtributos(atributo1);
    scanf("%d", &atributo2);

    // Validação
    if (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 4 || atributo2 < 1 || atributo2 > 4) {
        printf("Erro: atributos inválidos ou repetidos.\n");
        return 1;
    }

    // Obter valores
    float valor1_a = obterValor(carta1, atributo1);
    float valor2_a = obterValor(carta2, atributo1);
    float valor1_b = obterValor(carta1, atributo2);
    float valor2_b = obterValor(carta2, atributo2);

    float soma1 = valor1_a + valor1_b;
    float soma2 = valor2_a + valor2_b;

    // Exibição dos resultados
    printf("\n--- Resultado da Comparação ---\n");
    printf("Carta 1: %s\n", carta1.nome);
    printf("Carta 2: %s\n", carta2.nome);
    printf("Atributo %d: %.2f vs %.2f\n", atributo1, valor1_a, valor2_a);
    printf("Atributo %d: %.2f vs %.2f\n", atributo2, valor1_b, valor2_b);
    printf("Soma dos atributos: %.2f vs %.2f\n", soma1, soma2);

    // Resultado final
    if (soma1 > soma2)
        printf("Vencedora: %s\n", carta1.nome);
    else if (soma2 > soma1)
        printf("Vencedora: %s\n", carta2.nome);
    else
        printf("Empate!\n");

    return 0;
}
