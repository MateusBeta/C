#include <stdio.h>

int main(){

int resultado, op1, count, base, decimal;

printf("Insira o numero em decimal para ser convertido em hexa\n");
scanf("%d", &op1);
base = 16;
decimal = op1;

while (op1 <= base){
    resultado = op1 / base;
    op1 = op1 / base;
    count++;
}

printf("Seu numero em decimal: %d em hexa é: %d%d\n", decimal, count, op1);
printf("%d\n", count);

return 0;
}