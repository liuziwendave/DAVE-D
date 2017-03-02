#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
   int num;
   int sum=0;
   printf("Input numbers(0 to terminate): \n ");
   do{
   printf("\t");
   scanf("%d", &num);
   sum+=num;
   }while(num!=0);

   printf("sum: %d\n", sum );
   
   return EXIT_SUCCESS;
}
