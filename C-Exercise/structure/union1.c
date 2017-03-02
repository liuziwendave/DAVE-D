#include <stdio.h>
#include <stdlib.h>

int main (int argc,char **argv){
   union data{
      int number;
      char letter;
   };
   
   union data value;
   value.number=33;
   value.letter='D';

   union data *ptr;//point to union
   ptr=&value;
   char myletter=ptr->letter;

   printf("My letter: %c\n", myletter);
   printf("My number: %d\n", myletter);

   return EXIT_SUCCESS;
}
