#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void getnum(void);
void getsqrt(int x);

int main(int argc ,char **argv){
   
   getnum();
   
   return EXIT_SUCCESS;
}

void getnum(void){
int num;
   printf("Input a number: ");
   scanf("%d",&num);
   getsqrt(num);
}

void getsqrt(int x){
   int onum;
   onum=sqrt(x);

   int i;
   for(i=2;i<=onum;i+=2){
      printf("%d\n", i*i);
   }
}


