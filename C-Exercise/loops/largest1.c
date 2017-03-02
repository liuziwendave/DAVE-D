#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
   float num;
   float max=0.0;

   do{
      printf("Input numbers(0 to terminate): ");
      scanf("%f",&num);

      if(num>max)
	 max=num;
   }while(num>0);

   printf("the largest number is %.1f\n", max);
   
   return EXIT_SUCCESS;
}
