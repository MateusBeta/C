//Programa para calcular o desconto no seu produto
#include <stdio.h>

int main(){
// a variavel float é utilizada para numeros quebrados
float preco;    //Preço total do produto
float porcentagem;    //Porcentagem declarada ao produto
float sobra;  //Valor do desconto no produto
float desconto;   //Preço total com o desconto

printf("Programa para calcular o valor do desconto do seu produto!");
printf("\n\nPrimeiro insira o valor do seu produto e pressione ENTER: ");
//%f é usada para o float
scanf("%f", &preco);
printf("\n\nQual sera o desconto para o seu produto?");
scanf("%f", &porcentagem);

sobra = (porcentagem*preco)/100; //como o usuario nao ira colocar o valor da porcentagem bonitinho, exemplo: "5=0,05", eu mesmo faço o calculo para ele pelo programa 
desconto = (preco-sobra);

printf("\n\nO desconto é de: %f", sobra);
printf("\n\nO valor total do produto era de: %f", preco);
printf("\n\nO novo valor do produto é de: %f", desconto);
printf(" \n");





return 0;
}