/*Programa para calcular o desconto de um funcionario onde o salario sendo maior que 5.000,
tera um desconto de 5%, caso contrario, nao havera desconto*/

#include <stdio.h>

int main(){

float salario, desconto, limite, salarioDescontado, totalDesconto, desconto2;
//desconto para tirar do salario, que seria 95%, pra pegar só os 5%
desconto = 0.95;
//desconto2 é para poder descobrir o valor do desconto tirado do salario, visto na linha 19
desconto2 = 0.05;
limite =5000;

printf("Qual o salario do funcionario?\n");
scanf("%f", &salario);

salarioDescontado = salario * desconto;
totalDesconto = salario * desconto2;

    if (salario > limite){ 
        printf("Seu salario é de: %2f,", salarioDescontado);
        printf("\nO desconto foi de: %2f\n", totalDesconto);
    }
    else{
        printf("O salario não tem desconto, continua: %2f\n", salario);
    }
return 0;
}