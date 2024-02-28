#include <stdio.h>

int main(){
    float n1;
    
    printf("Digite Sua Nota: ");
    scanf("%f", &n1);

    if(n1 >= 7){
        printf("Parabens voce foi Aprovado com a nota: %.2f", n1);
    }

    else{
        printf("Infelizmente voce foi reprovado com a nota: %.2f", n1);
    }
}
