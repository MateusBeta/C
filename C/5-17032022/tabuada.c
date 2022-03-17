#include <stdio.h>

int main()
{
   int multiplicador, calculo, resultado,totalTabuada;
   
   printf("\t\t\t##############################################\n");
   printf("\t\t\t# Informe o número que deseja ver na tabuada #\n");
   printf("\t\t\t##############################################\n");
   scanf("%d", &calculo);

   printf("\t\t\t#############################################\n");
   printf("\t\t\t# Nos informe até onde deseja ver a tabuada #\n");
   printf("\t\t\t#############################################\n");
   scanf("%d", &totalTabuada);

   multiplicador = 0;

/*
   //Posso fazer tbm assim:

   for(multiplicador = 0; multiplicador <= totalTabuada; multiplicador ++)
   {
        printf("%d x %d = %d\n", calculo, multiplicador, (calculo*multiplicador));
    }
*/


   while(multiplicador <= totalTabuada){
       resultado = calculo * multiplicador;
        printf("\t\t--------------\n");
        printf("\t\t%d x %d = %d\n", calculo, multiplicador, resultado);   
       multiplicador++;
   }

    return 0;
}
