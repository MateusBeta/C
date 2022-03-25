//programa para calcular o resto de uma divisao
#include <stdio.h>

int main(){
// a variavel int é usada para numeros inteiros
int n1, n2, resultado;

printf("Coloque primeiro o numero que deseja dividir e aperte ENTER: ");
scanf("%d", &n1);
printf("Digite agora o divisor e aperte ENTER: ");
scanf("%d", &n2);
printf("O resultado é: %d", n1%n2);
printf(" \n");
return 0;
}