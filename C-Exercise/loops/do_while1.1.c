#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
   int i=10;
   do{
      printf("Countdown form 10: %d\n", i);
      --i;
   }while(i>0);

   return EXIT_SUCCESS;
}
