#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
   if(argc<2){
      printf("Error, input arguments\n");
      return EXIT_FAILURE;
   }

   int i=0;
   while(i<argc){
      printf("[%d]Arguments is %s\n",i,argv[i]);
      i++;
   }


   return EXIT_SUCCESS;
}
