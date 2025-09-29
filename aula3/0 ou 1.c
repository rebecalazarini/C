//programa que implemente um menu onde o usurário deverá selecionar 1 ou 0. Caso seja entrado um número diferente, o programa deverá solicitar uma nova opção.
#include<stdio.h>
int main(){
    int escolha;
     
     for (;;) 
    {
        printf("escolha um numero sendo 0 ou 1: ");
        scanf("%d", &escolha);

        if (escolha > 1) {
            printf("numero inválido, recomece \n");
            
            
        } else {
            printf("Você digitou certo\n");
        }
    }
    

    return 0;
}