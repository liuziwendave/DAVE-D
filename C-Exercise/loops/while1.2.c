#include <stdio.h>
#include <stdlib.h>

//void add(int c);

int main(int argc, char **argv){
   puts("the programe is add all input number.\n");
   
   int num;
   printf("Input integers(0 to terminate): \n");
   scanf("%d",&num); 

   int sum;
   while(num!=0){
      //num is to identity whether num=0;
      sum=sum+num;
      scanf("%d", &num);
   }

   printf("The sum is: %d\n", sum);

      
   return EXIT_SUCCESS;
}
/*void add(int c){
   int sum;
   while(c!=0){
      sum=sum+c;
      scanf("%d", &c);
   }

   printf("The sum is: %d\n", sum);
}*/
