#include <stdio.h>

int main(){

int resultado, op1, count, base;

printf("Insira o numero em decimal para ser convertido em hexa\n");
scanf("%d", &op1);

count = 0;
base = 16;
resultado = op1 / base;

while (resultado <= base)
{
    resultado = resultado / base;
    count++;
}

printf("Seu numero em decimal: %d em hexa é: %d%d\n", op1, count, base);
printf("c%d", count);


return 0;
}