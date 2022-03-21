//Programa para manter a tela sempre ativa, caso o usuario digite "9", então a tela sera liberada.


#include <stdio.h>

int main(){

    int op = 0;
    printf("Digite um número para sair e tecle Enter\n");
    scanf("%d", &op);

    while (op != 9)
    {
        system("clear");
        printf("\nVocê errou...!!! >:(\n");
        printf("Tente outra vez. Digite um número para sair e tecle Enter\n");
        scanf("%d", &op);
    }
    



return 0;
}