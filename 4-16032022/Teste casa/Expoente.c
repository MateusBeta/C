#include <stdio.h>

int main(){

int numero, potencia, resultado, contador;
printf("Escreva o numero para ser expoenciado: ");
scanf("%d", &numero);
contador = 1;
potencia = 0;
while (contador <= 11)
{
    resultado = numero * numero;
    potencia = potencia + 1;
    printf("%d\n", resultado);

    contador = contador + 1;

}




    return 0;
}