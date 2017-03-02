#include <stdio.h>
#include <stdlib.h>

void getbar(int c);

int main(int argc, char **argv){
   int num;
   printf("Input a number: ");
   scanf("%d", &num);
   getbar(num);
   return EXIT_SUCCESS;
}

void getbar(int c){
int i=1;
   while(i<=c){
      printf("%10d%20d\n", i, i*i);
      i++;
   }
}


