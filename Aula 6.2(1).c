#include <stdio.h>

int main(){

    char s[10]; //cada caractere pega um espaço do vetor(Lista)

    printf("Digite algo(Scanf convencional): \n");
    scanf("%s", s);
    fflush(stdin); 

    printf("Resultado: %s\n\n", s);


    printf("Digite algo(Scanf Aprimorado): \n");
    scanf("%9[^\n]s", s);                            //Scanf Aprimorado pra Strings
    fflush(stdin);

    printf("Resultado: %s\n\n", s);
}