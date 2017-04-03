#include <stdio.h>
#include <stdlib.h>

#define numbers 1,2,3
#define max(x,y) ((x)>(y)?(x):(y))

int main (int argc,char **argv){
   int *p,*q,n;
   int val1=21,val2=34;
   q=&val1;
   p=&val2;
   n=98;

   int x=max(12,334);
   int y=max(n+12,*q);
   //int z=max(q,p);

   printf("Since a=12,b=334; %d is the biggest\n", x);
   printf("Since a=n+12,*q=21; %d is the biggest\n", y);
   //printf("Since q=%x, p=%x; %x is the biggest one\n", z);

   return EXIT_SUCCESS;
}
