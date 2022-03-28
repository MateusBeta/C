/*
Programa para trabalhar com funções, vamos usar funções com retorno,
sem retorno, com argumentos(parametros), e sem argumento
*/
#include <stdio.h>
#include <stdlib.h>

void separadorHT(){
    for (int i = 0; i <+ 50; i++){   
    printf("#");
    }
}
void separadorLinha(){
    for (int i = 0; i <+ 50; i++){
        printf("_");
    }
}
void pularLinha(int qtdVezes){
    for (int i = 1; i <= qtdVezes; i++){
        printf("\n");
    }
}
char *comparar(int v1, int v2){
    if (v1 > v2){
        return "\tO primeiro número é maior que o segundo.";
    }
    else if(v1 == v2){
       return "\tOs números são iguais!";
    }
    else{
       return "\tO segundo número é maior que o primeiro.";
    }
    
}
void main(){
    int n1, n2;

    system("clear");//limpar a tela do terminal
    
    separadorHT(); //chamando a função separadorHT
    pularLinha(2); //chamando a função pularLinha(quantidade de vezes para pular a linha)
    printf("\tPrograma que exibe uma mensagem");
    pularLinha(2);
    separadorLinha(); //chamando a função separadorLinha();
    pularLinha(2);

    printf("\tDigite um número: ");
    scanf("%d", &n1);
    
    printf("\tDigite outro número: ");
    scanf("%d", &n2);
    
    separadorLinha();
    pularLinha(2);
    printf("\t...........Calculando...........");
    pularLinha(2);

    printf(comparar(n1, n2));
    pularLinha(2);
    separadorHT();
    pularLinha(1);
}




    