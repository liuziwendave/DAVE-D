#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define inch_rate 0.397
#define foot_rate 0.032


int main (int argc, char **argv){

   float a,inch;
   int foot;

   printf("Input height in centimeters: ");
   scanf("%f",&a);

   inch= a*inch_rate;
   foot= a*foot_rate;

   printf("Hight in inch is: %.2f\n", inch);
   printf("Hight in feet is: %d\n", foot);

   float delta=inch-(foot*12);
   printf("Hight is %d feet %.1f inch\n", foot, delta);


   return EXIT_SUCCESS;
}
