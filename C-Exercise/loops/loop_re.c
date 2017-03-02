#include <stdio.h>
#include <stdlib.h>

void evennumber(int k);

int main (int argc, char **argv){
   printf("All even number between 0 to 100:\n");
   evennumber(0);
   return EXIT_SUCCESS;
}

void evennumber(int k){
   if (k<=100){
      printf("%d\n", k);
      evennumber(k+2);
   }
   
}
