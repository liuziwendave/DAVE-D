#include <stdio.h>
#include <stdlib.h>

#define x 9
#define y 10

int main (int argc, char **argv){

   int sum, difference, product, division, modulus;
   sum=x+y;
   difference=x-y;
   product=x*y;
   modulus=x%y;
   division=x/y;

   printf("If A=9,and B=10, then the sum is %d\n",sum);
   printf("Difference=%d\n",difference);
   printf("Product=%d\n",product);
   printf("Modulous=%d\n",modulus);
   printf("Division=%d\n",division);

puts("----------------------------------------------");
//Important part, differences between ++x and x++;

   int a;
   a=1;
   
   printf("a=%d\n",a);
   printf("++a=%d\n",++a);
   printf("a=%d\n",a);

puts("-------------------------------------------------");

   a=1;
   printf("a=%d\n",a);
   printf("a++=%d\n",a++);
   printf("a=%d\n",a);

puts("------------------------Part 4------------------------------");
   
   puts("init=0;increment=5,counter=1, result=init+increment*counter++");

   int init = 0;
   int increment = 5;
   int counter = 1;
   int result = init + increment*counter++;

   printf("result first time: %d, counter: %d\n", result, counter);

   result = init +increment*counter++;

   printf("result second time: %d, counter: %d\n", result, counter);
   
   result=init+increment*(++counter);
   printf("result third time: %d, counter: %d\n", result, counter);




   return EXIT_SUCCESS;
}
