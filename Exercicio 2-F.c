#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Digite a temperatura em graus Fahrenheit:\n");
    scanf("%f", &fahrenheit);

    celsius = (5.0/9.0) * (fahrenheit - 32);

    printf("A temperatura em graus Celsius: %.2f\n", celsius);

    return 0;
}
