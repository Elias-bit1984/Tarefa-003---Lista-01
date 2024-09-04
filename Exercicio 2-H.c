#include <stdio.h>

int main() {
    float primeiro_termo, razao;
    int N;
    float termo_n;

    printf("Digite o primeiro termo da progressao aritmetica:\n");
    scanf("%f", &primeiro_termo);

    printf("Digite a razão da progressao aritmetica:\n");
    scanf("%f", &razao);

    printf("Digite o número N (termo desejado):\n");
    scanf("%d", &N);

    termo_n = primeiro_termo + (N - 1) * razao;

    printf("O %d N-ésimo termo da progressao aritmetica é: %.2f\n", N, termo_n);

    return 0;
}