#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
   int i,sum=0;
   i=0;
   while(i<argc){
      sum=sum+atoi(argv[i]);
      i++;
   }
    printf("sum of command-line arguments=%d\n", sum);


   return EXIT_SUCCESS;
}
