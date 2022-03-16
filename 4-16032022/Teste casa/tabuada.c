#include <stdio.h>

int main()
{
   int tabuada, calculo, resultado;
   
   printf("Coloque o numero que deseja ver a tabuada\n");
   scanf("%d", &calculo);
   
   tabuada = 0;
  
   while(tabuada <= 10){
       resultado = calculo * tabuada;
        printf("%d*%d = %d\n", calculo, tabuada, resultado);   
       tabuada++;
       
   }

    return 0;
}
