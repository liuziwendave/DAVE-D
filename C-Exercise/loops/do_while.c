#include <stdio.h>
#include <stdlib.h>

void do_while(void);

int main (int argc, char **argv){
   do_while();
   return EXIT_SUCCESS;
}

void do_while(void){
   char c='x';
   int testv=0;
   do {
	 testv=999;
	 printf("Enter a letter: ");
	 c=getchar();
	 printf("Entered letter: %c\n", c);
	 getchar();
   }while(c!='x');
   printf("\n The key is x\n");
   printf("testvariable: %d\n", testv);
}
