//Programa para calcular a media de 10 numeros
#include <stdio.h>
#include <stdlib.h>

void main(){
    float num, soma=0, media=0;
    int i;
//inicio do laco for
    for (i = 1; i <= 10; i++)
    {
        //a partir deste ponto sao as instrucoes
        //que devem ser executadas nas interacoes
        printf("Informe o numero:");
        scanf("%f", &num);
        soma += num;
    }
    media = soma / 10;
    printf("A media é: %f\n", media);
}