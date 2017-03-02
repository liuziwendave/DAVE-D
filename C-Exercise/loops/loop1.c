#include <stdio.h>
#include <stdlib.h>

void oddnumber(void);
void evennumber(void);

int main (int argc ,char **argv){
   oddnumber();
   evennumber();
   return EXIT_SUCCESS;
}

void oddnumber(void){
   puts("The even number between 0 to 100\n");
   for(int i=0; i<=100; i+=2){
      printf("%d\n", i);
   }
}

void evennumber(void){
   puts("The old number between 0 to 100\n");
   for(int k=1; k<=100;k+=2){
      printf("%d\n", k);
   }
}
