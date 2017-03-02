#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
   printf("Input a number: ");
   int n;
   scanf("%d", &n);

   int i;
   for(i=1;i<=n;i++){
      printf("%10d%20d\n",i,i*i);
   }
   return EXIT_SUCCESS;
}
