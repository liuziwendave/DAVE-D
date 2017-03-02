#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv){
   float number; 
   float largest;


   do{
      printf("Input numbers(0 to terminate): ");
      scanf("%f",&number);

      if(number>largest)
	 largest=number;
   }while(number>0);
   
   printf("The largest number is %.2f\n", largest);
   
   return EXIT_SUCCESS;
}
