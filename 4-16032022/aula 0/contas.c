//Programa para calcular todas as operações
#include <stdio.h>

int main() {
char op;
double primeira, segunda;
printf("Digite um das operações e confirme com o ENTER (+, -, *, /): ");
scanf("%c", &op);
printf("Escreva os valores um de cada vez\n Exemplo: 1.5 ENTER, 1.3 ENTER");
printf("\nInforme o valor: ");
scanf("%lf %lf", &primeira, &segunda);

switch (op) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf\n", primeira, segunda, primeira + segunda);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf\n", primeira, segunda, primeira - segunda); 
        break;  
    case '*':
        printf("%.1lf * %.1lf = %.1lf\n", primeira, segunda, primeira * segunda);  
        break; 
    case '/':
        printf("%.1lf / %.1lf = %.1lf\n", primeira, segunda, primeira / segunda);  
        break;
    // Caso nao identifique
    default:
        printf("Ops, a operação não esta correta\n");
         }
return 0;


}