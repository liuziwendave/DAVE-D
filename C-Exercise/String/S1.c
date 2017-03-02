#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

   char name[20], address[30];
   
   char c;
   printf("Choose a Number between 1 to 5\n");
   c=getchar();

   printf("Name: ");
   scanf("%s", name);

   printf("Address: ");
   scanf("%s", address);

   printf("Your name:%s\n", name);
   printf("Your address:%s\n", address);
   
   printf("Yue like number: ");
   putchar(c);

   printf("\n");



   return EXIT_SUCCESS;
}
