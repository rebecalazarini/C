//Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

#include <stdio.h>

int main() {
    int valor;

    printf("Digite um número: ");
    scanf("%d", &valor);

    if (valor > 0) {
        printf("O número é positivo.\n");
    } else if (valor < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}