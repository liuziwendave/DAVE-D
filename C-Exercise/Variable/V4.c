#include <stdio.h>
#include <stdlib.h>

int main (int argc,char **argv){

   int weather;
   int supermarket;
   int wagon;
   int mood;
   int decision;

   printf("Weather is good?(1=Good,0=Bad)");
   scanf("%d", &weather);

   printf("Is there a supermarket?(1=Yes, 0=No)");
   scanf("%d",&supermarket);

   printf("Station Wagon condition?(1=Good, 0=Bad)");
   scanf("%d",&wagon);

   printf("What mood do you have: (1=Good Mood, 0=Bad Mood)");
   scanf("%d", &mood);

   decision=(weather && (supermarket || wagon) && mood);
   printf("Under these condictions the  decision is %d", decision);
   
   printf("\n");

   return EXIT_SUCCESS;
}
