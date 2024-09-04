#include <stdio.h>

int main() {
    float P, V, T;  
    float M;        

    printf("Digite a pressão do pneu (em psi):\n");
    scanf("%f", &P);

    printf("Digite o volume do pneu (em litros):\n");
    scanf("%f", &V);

    printf("Digite a temperatura do pneu (em graus Celsius):\n");
    scanf("%f", &T);

    M = (P * V) / (T + 460);

    printf("A massa de ar do pneu é: %.2f libras\n", M);

    return 0;
}
