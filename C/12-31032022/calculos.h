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
void ordenar(int valores[], int tamanho){
    for (int j = 1; j < tamanho; j++){
        int x = valores[j];
        int i;
        for (i = j-1; i >= 0 && valores[i] > x; i--){
            valores[i+1] = valores[i];
        }
        valores[i+1] = x;
    }
    printf("%d\n", valores);
}