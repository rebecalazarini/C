//Faça um programa que peça para o usuário digitar um número qualquer porém só termine quando o usuário digitar o número 7
#include <stdio.h>
int main() {
    int numero;
    for (;;){
        printf("\nDigite um numero: ");
    scanf("%d", &numero);
    
    if ( numero == 7){
        printf("\nVocê digito o numero 7, o programa vai terminar.");
        break;
    }else{
        printf("\nvocê digitou:%d",numero);
    }
    }
    
    return 0;
}