#include <stdio.h>
#include <stdlib.h>

int main (int argc,char **argv){

   int height, length, width, volume, weight;

   height=8;
   length=12;
   width=10;
   volume=height*length*width;
   weight=(volume+166)/166;

   printf("Dimensions: %d*%d*%d\n",height,length,width);
   printf("Volume: %d\n",volume);
   printf("Dimensions Weight: %d\n",weight);


   return EXIT_SUCCESS;

}
