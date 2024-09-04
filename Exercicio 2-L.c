#include <stdio.h>

int main() {
    int valor_total;
    int notas_100, notas_50, notas_10, notas_5, notas_1;

    printf("Digite o valor total em reais:\n");
    scanf("%d", &valor_total);

    notas_100 = valor_total / 100;
    valor_total %= 100;

    notas_50 = valor_total / 50;
    valor_total %= 50;

    notas_10 = valor_total / 10;
    valor_total %= 10;

    notas_5 = valor_total / 5;
    valor_total %= 5;

    notas_1 = valor_total;

    printf("Notas necessárias:\n");
    printf("Notas de 100 reais: %d\n", notas_100);
    printf("Notas de 50 reais: %d\n", notas_50);
    printf("Notas de 10 reais: %d\n", notas_10);
    printf("Notas de 5 reais: %d\n", notas_5);
    printf("Notas de 1 real: %d\n", notas_1);

    return 0;
}
