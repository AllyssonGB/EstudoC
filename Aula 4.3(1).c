#include <stdio.h>

int main(){
    int n1;

    printf("Digite um numero (1//3): ");
    scanf("%d", &n1);

    switch(n1){
        case(1):
            printf("Voce Digitou o numero: %d", 10);
            break;
        
        case (2):
            printf("Voce Digitou o numero: %d", 5);
            break;
        
        case(3):
            printf("Voce Digitou o numero: %d", 15);
            break;
        
        default:
            printf("Numero Invalido");
            break;
 }
}