//um programa que receba uma senha formada de quatro números inteiros, verifique se a senha está correta e, caso não esteja, solicite novamente a senha. Se a senha entrada for a correta, deverá ser apresentada a mensagem “Senha Correta”, caso contrário, “Senha Incorreta”.   
#include<stdio.h>
int main(){
    int senha;
    for(;;){
        printf("Digite a senha correta: ");
        scanf("%d", &senha);
        
        if(senha <= 2312) {
            break;
        } else{
            printf("senha inválida.");
        }
    }
    printf("Senha válida. O programa vai terminar");
    
    return 0;
}