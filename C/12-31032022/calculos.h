#include<stdlib.h>
#include<stdio.h>

void soma(int array[], int tamanho){
    int rs = 0;
    for (int i = 0; i < tamanho; i++){
        rs += array[i];
    }
    printf("O resultado da soma é: %d\n",rs);
    }

void maiorValor(int array[],int tamanho){
    int m = array[0];
    for (int i = 1; i < tamanho; i++){
        if (array[i] > m)
        {
            m = array[i];
        }
        
    }
    printf("O maior valor é: %d\n", m);

}