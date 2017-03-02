#include <stdlib.h>
#include <stdio.h>

int getnum(void);
void toolarge(void);
void toosmall(void);
void justright(void);

int main (int argc, char **argv){
   
   int num=getnum();

   if(num<0)
      toosmall();

   if(num>100)
      toolarge();

   if ((num>=0)&&(num<=100))
      justright();

   return EXIT_SUCCESS;
}

int getnum(void){
   int num;
   printf("Input a number between 0 to 100: ");
   scanf("%d", &num);
   return num;
}

void toosmall(void){
   printf("Number is too small\n");
}

void toolarge(void){
   printf("Number is too large\n");
}

void justright(void){
   printf("The number is just right\n");
}
