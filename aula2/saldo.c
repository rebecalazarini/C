#include <stdio.h>
int main(){
    char nome[100];
    int ganho;
    int gasto;
    int saldo;
    
    printf("digite o nome da pessoa: ");
    scanf("%s", nome);
    
    printf("digite o ganho: ");
    scanf("%d", &ganho);
    
    printf("digite o gasto: ");
    scanf("%d", &gasto);
    
    saldo=(ganho-gasto);
    printf(" A media é %2.d", saldo);
    
    if(saldo>=200){
        printf("Teho saldo");
    } else {
        printf("Pouco saldo");
    }
    return 0;
    
}