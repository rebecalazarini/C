//Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <stdio.h>

int main() {
    float lado, area, dobro;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    dobro = area * 2;
    printf("A area do quadrado eh: %.2f\n", area);
    printf("O dobro da area eh: %.2f\n", dobro);
    return 0;
}