#include <stdio.h>
#include <stdlib.h>

int getnum(void);
void toolarge(void);
void toosmall(void);
void justright(void);
void checkerror(int num);

int main (int argc, char **argv){
   int num=getnum();
   
   if((num>=100) && (num<=0))
      justright();
   else
      checkerror(num);

   return EXIT_SUCCESS;
}
int getnum(void){
   int num;
   printf("Input a number between 0 to 100: ");
   scanf("%d", &num);
   return num;
}

void checkerror(int num){
   if (num<0)
      toosmall();
   else
      toolarge();
}

void toolarge(void){
   printf("The number is too large.\n");
}

void toosmall(void){
   printf("The number is too small.\n");
}

void justright(void){
   printf("hte number is just right.\n");
}
