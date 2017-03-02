#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char **argv){

   int x=10;
   int y=1;
   int result;

//Rgith-Shift 1 is eaqual to Divide by 2;

   result = x>>1;
   printf("x>>1=%d\n", result);

//left-shift 1 is equal to Multiple by 2;

   result=y<<1;
   printf("y<<1=%d\n", result);


   return EXIT_SUCCESS;
}
