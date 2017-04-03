#include <stdlib.h>
#include <stdio.h>

int main(int argc,char **argv){
   int num;
   printf("Ipunt number: ");
   scanf("%d", &num);
   int num1=num;

   int sum=0;
   while(num>0){
      int digit=num%10;
      sum=digit*digit*digit+sum;
      num=num/10;
   }


   if(sum==num1){
      printf("Armstrong number!");
   }else{
      printf("Not Armstrong NUmber!");
   }

   printf("\n");

   return EXIT_SUCCESS;
}
