//Programa para validar o cpf
#include <stdio.h>

int main(){

int resultado1, resultado2, total2;

char cpf[11];
int peso10 = 10;
int peso11 = 11;
int total = 0;
int sobra = 0;
int iCPF[10];
int sobra2 = 0;

//system("clear");

printf("Por favor, digite o seu cpf sem pontuação e traços: ");
scanf("%s", cpf);

/*converter todos os caracteres do cpf para numeros. Para isso,
devemos criar um conjunto de numeros em tipo int e realizar a conversão usando "for"*/

for (int x = 0; x <= 10; x++)
{
    iCPF[x] = cpf[x] - 48;// 0 - 48 é o numero base para converter numros de char para int
}

for (int i = 0; i <= 8; i++)
{
    total += peso10*iCPF[i];
    peso10--;
}
//printf("%d", total);
sobra = total%11;

if (sobra < 2)
{
    sobra = 0;
}

    else
    {
resultado1 = 11 - sobra;
}

if (resultado1 == iCPF[9]){
 for (int y = 0; y <= 9; y++){

    total2 += peso11*iCPF[y];
    peso11--;}
}
    else
{
    printf("Seu CPF esta incorreto");

}
sobra2 = total2%11;
if (sobra2 < 2)
{
    sobra2 = 0;
}
else{
resultado2 = 11 - sobra2;
}

if (resultado2 == iCPF[10])
{
    printf("Seu cpf esta ok\n");
}
else{
    printf("Seu CPF esta incorreto\n");
}

return 0;
}