#include <stdlib.h>
#include <stdio.h>

double temperature;

int func(void);
void measure(void);
void funcbyref(int *i,int *j);

int main(int argc,char **argv){
   int n=func();
   printf("After func(), n=%d\n", n);

   measure();
   printf("After the measure() temperature=%.1lf\n", temperature);

   int a,b;
   funcbyref(&a,&b);
   printf("After funcbyref(), a=%d, b=%d\n", a,b);


   return EXIT_SUCCESS;
}

int func(void){
   int value =12;
   return value;
}

void measure(void){
   temperature=21.2;
}

void funcbyref(int *i,int *j){
   *i=23;
   *j=123;
}
