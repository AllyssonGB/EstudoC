#include <stdio.h>

int main(){
    char s[10];  // espaço pra 10 caracteres no caso 9 por quer tem q ter 1 reservado pra o /0

    printf("Digite algo (Leitura pelo gets):\n");
    gets(s);
    fflush(stdin); // limpa teclado sempre bom coloca depois de um scanf,gets,fgets

    puts("Resultado:");  // parecido com o print do python (Linha por Linha)
    puts(s);
    puts("");

    printf("Digite algo (Leitura pelo fgets):\n");
    fgets(s, 10, stdin); // melhor que o scanf aprimorado pois limita automaticamente o ultimo caractere
    fflush(stdin);

    puts("Resultado:");
    puts(s);
}