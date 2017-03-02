#include <stdio.h>
#include <stdlib.h>

int main (int argc,char **argv){
   
   printf("Input message: ");
   char c=getchar();

   int i=0;
   int counter=0;
   while(c!='\n'){
      if(c==' '){
	 counter++;
      }
      c=getchar();
      i++;
   }
   printf("the lenght: %d\n", i);
   printf("Words: %d\n", i-counter);

   return EXIT_SUCCESS;
}
