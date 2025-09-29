//Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso.Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.

#include <stdio.h>

int main()
{
  float peso_peixes, excesso;
  int multa = 4;
  
  printf("Digite o peso do peixe: ");
  scanf("%f", &peso_peixes);
   
  if (peso_peixes > 50 ) {
       excesso = peso_peixes - 50;
       multa = excesso * 4;
      printf("\n Peso em excesso: %.2f", excesso);
      printf("\n multa a pagar: %d", multa);
      
  }else if (peso_peixes < 50 ) {
      printf("\n Nenhuma multa a pagar ");
  }
   
   

    return 0;
}