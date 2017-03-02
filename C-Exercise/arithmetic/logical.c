#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){

puts("the value of true is 1, and the value of false is 0\n");

   int x=3, y=6;

   printf("x==y is %d\n", (x==y));
   printf("x!=y is %d\n",(x!=y));
   printf("x>y is %d\n", (x>y));
   printf("x<y is %d\n", (x<y));
   printf("x>=y is %d\n", (x>=y));
   printf("x<=y is %d\n", (x<=y));


puts("----------------------------------");

   x=1;
   y=0;
   printf("If x=1 and y=0 the value of (x && y) is %d\n", (x && y));
   printf("the value of (x || Y) is %d\n", (x || y));
   return EXIT_SUCCESS;
}
