/* Programa contador usando um ponteiro, assim podemos ver que o ponteiro muda o valor da variavel mas nao muda
o endereço da memoria, sem o ponteiro cada valor iria para um endereço diferente, causando assim ma perfomance*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int x = 0; //usando algumas funções, se eu nao dar o valor 0 para a variavel, o programa roda mas nao liga o while
    int *px = &x;
    while (x < 10)
    {

        printf("%p tem o valor de: %d\n", px, *px); //o "*" na frente da variavel aqui é pra desreferenciar a variavel do endereço e colocar no valor
        x++;
    }
    

}
