#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
   int i=0;
   while(i<argc){
      printf("Argument %d is %d \n", i, atoi(argv[i]));
      i++;
   }


   return EXIT_SUCCESS;
}
