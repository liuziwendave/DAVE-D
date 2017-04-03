#include <stdlib.h>
#include <stdio.h>

#define num 1,2,3

int main(int argc,char **argv){
   int list[]={num};
   printf("Third number: %d\n", list[2]);


   return EXIT_SUCCESS;
}
