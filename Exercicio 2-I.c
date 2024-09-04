#include <stdio.h>
#include <math.h>  

int main() {
    float a, b, c;  
    float discriminante, raiz1, raiz2;

    printf("Digite o coeficiente a:\n");
    scanf("%f", &a);
    
    printf("Digite o coeficiente b:\n");
    scanf("%f", &b);
    
    printf("Digite o coeficiente c:\n");
    scanf("%f", &c);

    discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
       
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("As raízes da equação são: %.2f e %.2f\n", raiz1, raiz2);
    } else if (discriminante == 0) {
        
        raiz1 = -b / (2 * a);
        printf("A raiz da equação é: %.2f\n", raiz1);
    } else {
        
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-discriminante) / (2 * a);
        printf("As raízes da equação são: %.2f + %.2fi e %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

