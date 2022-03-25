/* Programa para estudar um pouco sobre ponteiro.
Este sera o primeiro exemplo */
#include <stdio.h>
#include <stdlib.h>

void main(){

    int valor = 50;
    //o "*"" no começo da variavel é pra chamar o ponteiro, coloquei "p" de ponteiro no começo da variavel só pra ficar mais claro
    // o "&" no começo da variavel valor é para chamar o endereço da variavel para o ponteiro
    int *pvalor = &valor; 
    
    //%p é usada para chamar o ponteiro, podemos usar o %d para chamar o decimal que esta gravado no ponteiro tbm
    printf("%d é o valor, e a posição em memória é: %p\n", valor, pvalor);
}