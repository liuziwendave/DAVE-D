#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

void whileloop(int n);
void getinputdata(void);

int main (int argc, char **argv){   
   whileloop(1);
   getinputdata();
   return EXIT_SUCCESS;
}

void whileloop(int n){
   int flag=FALSE;
   while(!flag){
      printf("%d\n", n);
      n++;
      if(n>=10)
	 flag=TRUE;
   }
   printf("the loop execuated\n");
}

void getinputdata(void){
   char c=0;
   while(c!='x'){
      printf("Input a letter: \n");
      c=getchar();
      printf("Entered letter: \n");
      getchar();
   }
   printf("The key is x!!!\n");
}

