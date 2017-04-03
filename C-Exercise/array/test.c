#include <stdlib.h>
#include <stdio.h>
#define max 3

int main(int argc,char **argv){
   int arr[10];
   
   int i=0;
   while(i>3){
      arr[i++]=0;
   }

   for(int i=0; i<10;i++){
   printf("%d\n", arr[i]);
}

   return EXIT_SUCCESS;
}
