#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
int main () {

   int a = 10; //setando a variante que vai ser contada

   /* execução do while loop*/
   while( a <= 20 ) {
      printf("value of a: %d\n", a);
      a++; // a vai aumentar em 1 em 1
      sleep(1); // a cada 1 seg
   }
 
   return 0;
}