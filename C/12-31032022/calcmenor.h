#include<stdlib.h>
#include<stdio.h>

void subtracao(int array[], int tamanho){
    int rs = 0;
    for (int i = 0; i < tamanho; i++){
        rs -= array[i];
    }
    printf("O resultado da subtração é: %d\n",rs);
    }

void menorValor(int array[],int tamanho){
    int m = array[0];
    for (int i = 1; i < tamanho; i++){
        if (array[i] < m)
        {
            m = array[i];
        }
        
    }
    printf("O menor valor é: %d\n", m);

}