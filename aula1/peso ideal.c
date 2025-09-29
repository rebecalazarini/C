//Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7

#include <stdio.h>

int main()
{
  float h, peso;
  char sexo;
  
  printf("Digite sua altura em metros: ");
  scanf("%f", &h);
  
  printf("Digite M se for homem ou F se for mulher: ");
  scanf(" %c", &sexo);
   
  if (sexo == 'M' || sexo == 'm') {
      peso = (72.7 * h) - 58;
      printf("Peso ideal pra homem é %.2f ", peso);
  }else if (sexo == 'F' || 'f') {
      peso = (62.1 * h) - 44.7;
      printf("Peso ideal pra mulher é %.2f ", peso);
  }
   
   

    return 0;
}