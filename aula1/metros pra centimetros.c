//Faça um Programa que converta metros para centímetros.

#include <stdio.h>

int main()
{
float metros;
    float centimetros;
    
    printf("Digite o numero em metros: ");
    scanf("%f", &metros);
    
    
    centimetros = metros * 100;
    
    printf("A resultado é: %.2f", centimetros);
    
    return 0;
}