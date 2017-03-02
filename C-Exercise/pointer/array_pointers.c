#include <stdio.h>
#include <stdlib.h>

int main (int argc,char **argv){
   int *dynamicArray=malloc(20*sizeof(int));
   *dynamicArray=10;
   printf("Address %p contains %d\n", dynamicArray, *dynamicArray);

   dynamicArray[1]=20;
   printf("DynamicArray[1] stores value %d\n.", dynamicArray[1]);

   free(dynamicArray);

   return EXIT_SUCCESS;
}  
