#include <stdio.h>
#include <stdlib.h>

int main (int argc,char **argv){

   int height, length, width;

   printf("Input Height: \n");
   scanf("%d", &height);
   printf("Input Length: \n");
   scanf("%d",&length);
   printf("Input Width: \n");
   scanf("%d", &width);

   int volume,weight;
   volume=height*width*length;
   weight=(volume+165)/166;
      printf("The volume of box: %d\n",volume);
      printf("The weight of box: %d\n",weight);


   return EXIT_SUCCESS;
}
