#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){

   int n=19;
   int *ptr;

   ptr=&n;

   printf("the address %p contains number: %d\n", ptr, *ptr);

   return EXIT_SUCCESS;
}


