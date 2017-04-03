#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int aegc,char **argv){
   bool digit_see[10]={0};
   int digit;
   long int n;

   printf("Input a number: ");
   scanf("%ld", &n);

   while(n>0){
      digit=n%10;
         if(digit_see[digit]){
            break;
         }
      digit_see[digit]=true;
      n=n/10;
   }        
   
   if(n>0){
      printf("Repeated numbers\n");
   }else{
      printf("No repeated numbers\n");
   }


   return EXIT_SUCCESS;
}
