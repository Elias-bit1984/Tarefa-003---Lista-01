#include <stdio.h>
#include <math.h> 

int main() {
    float raio, area;  

    printf("Qual é o raio do círculo?\n");
    
    scanf("%f", &raio);  

    area = M_PI * raio * raio;  

    printf("A área do círculo com raio %.2f é %.2f\n", raio, area);

    return 0;
}
