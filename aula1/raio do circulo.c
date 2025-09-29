//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include <stdio.h>

int main()
{
  float r;
  float pi = 3.14;
  float a;
  
  printf("Digite o raio do circulo: ");
  scanf("%f", &r);
  a = pi * r*  r;
   
  printf("O raio do circulo é: %.2f", a);
    
    return 0;
}