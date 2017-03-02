#include <stdlib.h>
#include <stdlio.h>

int main(int argc, char **argv){
   printf("Input a nonnegative number: ");
   int num;
   scanf("%d", &num);

   int count=0;
   do{
      num=num/10;
      count++;
   }while(num>0);

   return EXIT_SUCCESS;
}
