#include <stdio.h>
#include <stdlib.h>

void testbreak(void);

int main (int argc, char **argv){
   testbreak();

   return EXIT_SUCCESS;
}

void testbreak(void){
   int n;
   int loopcounter=0;
   while(1){
	    printf("Cycle %d: Input a number: \n", loopcounter);
	    scanf("%d", &n);
	    if((n==0) || (loopcounter>=10))
	       break;
	    loopcounter++;

   }
}
