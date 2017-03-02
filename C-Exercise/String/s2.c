#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc,char **argv){

   char string1[20];
   char string2[20];

   puts("---Scenario 1---");
   strcpy(string1,"Home");
   strcpy(string2,"Your Home");

   int len1=strlen(string1);
   printf("The length of string1 is %d\n",len1);
   int len2=strlen(string2);
   printf("The length of string2 is %d\n",len2);


   return EXIT_SUCCESS;
}
