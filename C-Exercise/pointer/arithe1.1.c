#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
   int array[]={1,2,3,4,5,6,67,7,87,8,8,3};
   int *ptr=array;
   printf("Array starts at address %p cntains %d", ptr, *ptr);

   int numelements=sizeof(array)/sizeof(int);

   for(int i=0; i<numelements;i++){
      printf("Address %p conatains %d\n", ptr, *ptr);
      ptr++;
   }

   return EXIT_SUCCESS;
}
