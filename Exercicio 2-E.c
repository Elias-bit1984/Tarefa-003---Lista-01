#include <stdio.h>
#include <math.h>  

int main() {

    float largura, altura, area, consumo_tinta, litros_necessarios;
    int latas_necessarias;

    printf("Qual é a largura da parede em metros?\n");
    scanf("%f", &largura);

    printf("Qual é a altura da parede em metros?\n");
    scanf("%f", &altura);

    area = largura * altura;

    consumo_tinta = 0.3;  
    
    litros_necessarios = area * consumo_tinta;

    latas_necessarias = (int)ceil(litros_necessarios / 2.0);

    printf("Você precisará de %d lata(s) de 2 litros de tinta para pintar a parede.\n", latas_necessarias);

    return 0;
}
