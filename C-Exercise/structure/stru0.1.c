#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_name_length 10
#define max_color_length 10

struct person{
      char fname[max_name_length];
      char lname[max_name_length];
      int age;
      char color[max_color_length];
};

void printstr(struct person indi);

int main(int argc,char **argv){
   struct person citi;
   citi.age=14;
   strcpy(citi.fname,"Dave");
   strcpy(citi.lname,"Liu");
   strcpy(citi.color,"Black");

   printstr(citi);

   return EXIT_SUCCESS;
}

void printstr(struct person indi){
      printf("First name: %s\t",indi.fname);
      printf("Last name:%s\t", indi.lname);
      printf("Age:%d\t", indi.age);
      printf("Eye color: %s\n", indi.color);
}
