/*
Programa para calcular quais e a quantidade dos anos bisextos entre os anos
1950 - 2022


*/
#include <stdio.h>
int main(){
int anoI, anoM, anoB;
anoM = 2022;

for(anoI = 1950; anoI <= anoM; anoI++)
   {
       if (anoI % 4 ==0)
       {
           printf("%d é bissexto\n", anoI);
           anoB++;
       }
       
        
    }


printf("Entre 1950 e 2022, tiveram %d anos bissextos\n", anoB);

return 0;
}