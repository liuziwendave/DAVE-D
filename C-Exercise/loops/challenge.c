#include <stdio.h>
#include <stdlib.h>

void barchart(int n);
void showbar(void);

int main (int argc, char **argv){
   showbar();
   return EXIT_SUCCESS;
}

void showbar(void){

   int k;
   printf("Input length of bar chart: ");
   scanf("%d", &k);
   barchart(k);
}


void barchart(int n){
   printf("%d", n);
   for(int i=0; i<n; i++){
      printf("\t-.-\t");
   }
   printf("\n");
}

