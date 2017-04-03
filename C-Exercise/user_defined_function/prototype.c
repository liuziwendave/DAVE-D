#include <stdio.h>
#include <stdlib.h>

double func(double x, double y);

int main (int argc,char **argv){
   double n=func(12.23,123.123);
   printf("%.1lf\n", n);
   return EXIT_SUCCESS;
}

double func(double x,double y){
   return x*y;
}
