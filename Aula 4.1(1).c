#include <stdio.h>

int main(){
    float n1;

    printf("Digite sua nota da prova: ");
    scanf("%f", &n1);

    if(n1 <= 5.9){
        printf("Reprovado sua nota foi de: %.2f", n1);
    }

    if(n1 >= 6){
        printf("Parabens Aprovado sua nota foi: %.2f", n1);
    }
}