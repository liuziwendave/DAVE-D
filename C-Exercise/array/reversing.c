#include <stdlib.h>
#include <stdio.h>

#define Max 10

int main(int argc,char **argv){
   int a[Max];
   
   printf("Input 10 numbers: ");

   for(int i=0; i<10;i++){
      scanf("%d", &a[i]);
   }

   for(int i=9;i>=0;i--){
      printf("%d ",a[i] );
   }
   
   printf("\n");
   return EXIT_SUCCESS;
}
