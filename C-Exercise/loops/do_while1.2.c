#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv){
   printf("Input a nonnegative number: ");
   int num;
   scanf("%d", &num);

   int count=0;
   do{
      num=num/10;
      count++;
   }while(num>0);
   
   printf("The digits are %d\n", count);

   return EXIT_SUCCESS;
}
