#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){

   float a, b,c;

   puts("------------Math Expression--------------");

   printf("Input a: ");
   scanf("%f", &a);

   printf("Input b: ");
   scanf("%f", &b);

   printf("Input c: ");
   scanf("%f", &c);

   int dis=sqrt(b*b-4*a*c);

   float root1=(-b+dis)/(4*a);
   float root2=(-b-dis)/(4*a);

   printf("Root 1: %.1f\n", root1);
   printf("Root 2: %.1f\n", root2);


   return EXIT_SUCCESS;
}
