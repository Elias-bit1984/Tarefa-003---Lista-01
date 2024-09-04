#include <stdio.h>

int main() {
    
    float preco_acao1 = 24.13;
    float preco_acao2 = 11.00;
    float preco_acao3 = 38.65;
    float dividendos_acao1 = 17.00;
    float dividendos_acao2 = 35.00;
    float dividendos_acao3 = 25.00;
    
    float valor_total = 1000.00;

    int quantidade_acao1 = valor_total / preco_acao1;
    int quantidade_acao2 = valor_total / preco_acao2;
    int quantidade_acao3 = valor_total / preco_acao3;

    float dy_acao1 = (dividendos_acao1 / preco_acao1) * 100;
    float dy_acao2 = (dividendos_acao2 / preco_acao2) * 100;
    float dy_acao3 = (dividendos_acao3 / preco_acao3) * 100;

    printf("Com R$ 1000,00 é possível comprar:\n");
    printf("Ação 1: %d ações\n", quantidade_acao1);
    printf("Ação 2: %d ações\n", quantidade_acao2);
    printf("Ação 3: %d ações\n", quantidade_acao3);

    printf("\nDividend Yield para cada ação:\n");
    printf("Ação 1: %.2f%%\n", dy_acao1);
    printf("Ação 2: %.2f%%\n", dy_acao2);
    printf("Ação 3: %.2f%%\n", dy_acao3);

    return 0;
}
