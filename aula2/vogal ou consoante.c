//Faça um Programa que verifique se uma letra digitada é vogal ou consoante. 

#include<stdio.h>
int main(){
    char letra;
    
    printf("Digite uma letra pra ver se é vogal ou consoante: ");
    scanf("%c", &letra);
    
    if (letra == 'a'|| letra =='e'|| letra=='i' || letra=='o' || letra=='u') {
    printf ("A letra digitada é vogal \n");

}else if (letra == 'b'|| letra =='c' || letra =='d'
|| letra =='f'|| letra=='g'|| letra=='h'|| letra=='j' || letra=='k'
|| letra =='l'|| letra =='m'|| letra =='n'|| letra=='p' || letra=='q'|| letra=='r'|| letra=='s'
|| letra=='t'|| letra=='v' || letra=='w' || letra=='x'|| letra=='y'|| letra =='z') {
    printf("A letra digitada é consoante \n");
    
}else{
printf ("Letra inválida");

}
    
    return 0;
}