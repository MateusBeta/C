/*
Programa para exibir o salario do cargo de acordo com a escolha do usuario
*/
#include <stdio.h>
int main(){

int opcao = 0;

//comando para limpar a tela
system("clear");//clear screen(limpar tela)
printf("#################################################");
printf("\n#\t Programa para exibir salário\t\t#\n");
printf("#################################################\n");
printf("\nEscolha um dos cargos abaixo digitando o numero correspondente:\n\n");
printf("---------------------------------------------------\n");
printf("\t1 - Diretor\n\t2 - Gerente\n\t3 - Analista\n\t4 - Assistente\n\t5 - Auxiliar\n");
printf("---------------------------------------------------\n");
scanf("%d", &opcao);

switch(opcao){
    case 1:
        printf("#\tO salário do Diretor é R$ 15.000,00\t#\n");
    break;
    case 2:
        printf("#\tO salário do Gerente é R$ 12.000,00\t#\n");
    break;
    case 3:
        printf("#\tO salário do Analista é R$ 8.000,00\t#\n");
    break;
    case 4:
        printf("#\tO salário do Assistente é R$ 4.000,00\t#\n");
    break;
    case 5:
        printf("#\tO salário do Auxiliar é R$ 2.000,00\t#\n");
    break;

    default:
        printf("#\tVocê, digitou um numero errado.\t#\n");
    break;
}

return 0;
}
