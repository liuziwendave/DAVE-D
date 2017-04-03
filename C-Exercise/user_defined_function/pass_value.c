#include <stdlib.h>
#include <stdio.h>

void function1(int a, int b);
void function2(int *a,int *b);

int main(int argc,char **argv){
   puts("------by Value------");
   int x=0;
   int y=0;
   printf("Before the function: x=%d, y=%d\n", x,y);
   function1(x,y);
   printf("After the function: x=%d,y=%d\n", x,y);


   puts("------by Reference------");
   x=0;
   y=0;
   
   printf("Befor function x=%d, y=%d\n", x,y);
   function2(&x,&y);
   printf("After function x=%d,y=%d\n", x,y);
   

   return EXIT_SUCCESS;
}
void function1(int a,int b){
   printf("In function received: x=%d, y=%d\n" ,a,b);
   a=11;
   b=22;
   printf("In function modified: x=%d, y=%d\n", a,b);
}

void function2(int *a,int *b){
   printf("In function received: x=%d,y=%d\n", *a,*b);
   *a=11;
   *b=22;
   printf("In function modified: x=%d,y=%d\n", *a,*b);

}

