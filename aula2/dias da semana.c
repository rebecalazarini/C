//Faça um Programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.

#include<stdio.h>
int main(){
    int num;
    
    printf("Digite um numero de 1 a 7 inteiro: ");
    scanf("%d", &num);
    
    if (num == 1) {
    printf ("Domingo \n");

}else if (num == 2) {
    printf("Segunda \n");
    
}else if (num == 3) {
    printf("Terça\n");

}else if (num == 4) {
    printf("Quarta \n");
    
}else if (num == 5) {
    printf("quinta \n");
    
}else if (num == 6) {
    printf("Sexta \n");
    
}else if (num == 7) {
    printf("Sabado \n");
    
}else{
    
printf ("numero inválido");

}
    
    return 0;
}