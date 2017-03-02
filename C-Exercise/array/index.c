#include <stdio.h>
#include <stdlib.h>

#define Max 10

void printarr(char name[], int data[], int memory);

int main (int argc, char **arv){
   int arr[Max]={12,23,34,45,45};

   arr[3]+=2;

   printf("%d\n", arr[3]);

   printarr("arr", arr, Max);

   return EXIT_SUCCESS;
}

void printarr(char name[], int data[], int memory){
   for (int i=0; i<memory; i++){
      printf("%s[%d]: %d\n", name, i, data[i]);
   }
}
