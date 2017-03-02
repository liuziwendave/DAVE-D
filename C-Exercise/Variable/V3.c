#include <stdio.h>
#include <stdlib.h>

#define F_p 30
#define S_f (5.0f/9.0f)

int main(int argc, char **argv){

   double frh, cel;

   printf("Enter Fahrenheit temperture: ");
   scanf("%lf",&frh);

   cel=(frh-F_p)*S_f;

   printf("Celsius equivalement; %.1lf\n", cel);


   return EXIT_SUCCESS;
}
