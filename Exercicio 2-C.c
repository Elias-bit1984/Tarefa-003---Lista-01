#include <stdio.h>

int main() {
    char nome[50];  
 
    int idade;      

    printf("Qual é o seu nome?\n");
    
    scanf("%49s", nome);  

    printf("Quantos anos você tem?\n");
    
    scanf("%d", &idade);  

    int dias_de_vida = idade * 365;  

    printf("Olá, %s! Você viveu aproximadamente %d dias.\n", nome, dias_de_vida);

    return 0;
}
