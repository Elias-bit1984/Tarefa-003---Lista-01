#include <stdio.h>

int main() {
   
    char nome[50];  

    printf("Olá eu sou o Nº 1, como é seu nome?\n");

    scanf("%30s", nome);  

    printf("Bem-vindo ao clube, %s!\n", nome);

    return 0;
}

