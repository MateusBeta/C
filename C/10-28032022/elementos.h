/*
    Este arquivo foi nomeado com a extensão .h(header->cabeçalho "biblioteca").
    Assim podemos criar algumas funções ou estruturas compartilhadas, sendo possível
ser utilizadas por diversos programas.
    Todas as vezes que esta biblioteca for usada, é importante realizar a sua
inclusão no código que a irá utilizar.
*/
#include <stdio.h>
#include <stdlib.h>

void separador(){
    printf("\n");
    for(int i = 0; i <= 100; i++){
        printf("#");
    }
    printf ("\n");
}
void quebrarLinha(int qtdVezes){
    for (int i = 1; i <= qtdVezes; i++){
        printf("\n");
    }
    
}