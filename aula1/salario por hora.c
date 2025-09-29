//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <stdio.h>

int main()
{
   float g_hora, h_trabalhadas, t;
   
   printf("Quanto você ganha por hora: ");
   scanf("%f", &g_hora);
   
   printf("Numero de horas trabalhadas: ");
   scanf("%f", &h_trabalhadas);
   
   t = g_hora * h_trabalhadas;
   
   printf("O valor liquido é %.2f ", t);
   
   
   

    return 0;
}