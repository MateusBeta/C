//Programa para validar o cpf
#include <stdio.h>

int main(){

char cpf[11];
int peso10, peso11,sobra, total, soma;

peso10 = 10;
peso11 = 11;
total = 0;
sobra = 0;
system("clear");

printf("Por favor, digite o seu cpf sem pontuação e traços: ");
scanf("%s", cpf);

/*converter todos os caracteres do cpf para numeros. Para isso,
devemos criar um conjunto de numeros em tipo int e realizar a conversão usando "for"*/
int iCPF[11];
for (int x = 0; x <= 10; x++)
{
    iCPF[x] = cpf[x] - 48;// 0 - 48 é o numero base para converter numros de char para int
}

for (int i = 0; i <= 8; i++)
{
    //soma = peso10*iCPF[i];        +=???
    printf("%d - ", peso10*iCPF[i]);
    peso10--;
}

//printf("%d", soma);


return 0;
}