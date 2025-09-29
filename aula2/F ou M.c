//Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.

#include<stdio.h>
int main(){
    char sexo;
    
    printf("Digite seu sexo ( M ou F ): ");
    scanf("%c", &sexo);
    
    if (sexo == 'M' || sexo == 'm') {
    printf ("Você é homem \n");

}else if (sexo == 'F' || sexo == 'f') {
    printf("Você é mulher \n");
    
}else{
printf ("Sexo inválido");

}
    
    return 0;
}