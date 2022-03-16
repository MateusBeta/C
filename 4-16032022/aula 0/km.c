//Programa para calcular a velocidade média que você percorrera de um ponto x para o y
#include <stdio.h>

int main() {
// a variavel int é usada para numeros inteiros
int km, tempo, vm;

printf("Programa criado para calcular quantos km percorrer para chegar no objetivo em tempo\n");
printf("Qual a distancia em km até o objetivo? ");
//%d é usada para o int
scanf("%d", &km);
printf("Qual a duração da viagem em horas? ");
scanf("%d", &tempo);

vm = km/6;

printf("A velocidade média para o seu objetivo é de: %d", vm); 
//posso colocar o km/h do lado do "%d", Ex: "é de: %dkm/h",vm)"
printf("km/h");
printf(" \n");
return 0;



}