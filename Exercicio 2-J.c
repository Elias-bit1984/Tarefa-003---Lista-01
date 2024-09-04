#include <stdio.h>

int main() {
    int notas_1_real, notas_10_reais, notas_50_reais, notas_100_reais;
    int total;

    printf("Digite a quantidade de notas de 1 real:\n");
    scanf("%d", &notas_1_real);

    printf("Digite a quantidade de notas de 10 reais:\n");
    scanf("%d", &notas_10_reais);

    printf("Digite a quantidade de notas de 50 reais:\n");
    scanf("%d", &notas_50_reais);

    printf("Digite a quantidade de notas de 100 reais:\n");
    scanf("%d", &notas_100_reais);

    total = (notas_1_real * 1) + (notas_10_reais * 10) + (notas_50_reais * 50) + (notas_100_reais * 100);

    printf("O valor total em dinheiro é: R$ %d\n", total);

    return 0;
}

