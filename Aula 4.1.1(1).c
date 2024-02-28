#include <stdio.h>

int main(){
    float n1;

    printf("Digite Sua nota da escola: ");
    scanf("%f", &n1);

    if(n1 >= 4 && n1 <= 7){
        printf("Primeira Condi");
    }

    if(n1 > 10 || n1 < 0){
        printf("Segunda Condi");
    }
}