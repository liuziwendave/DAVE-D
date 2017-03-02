#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxname 30
#define maxcolor 30

struct person{
   char firstname[maxname];
   char lastname[maxname];
   int age;
   char color[maxcolor];
   float height;
};

void printstructure(struct person individual);

int main (void){
   struct person citizen;
   citizen.age=30;
   citizen.height=33.2;
   strcpy(citizen.firstname, "Dave");
   strcpy(citizen.lastname, "John");
   strcpy(citizen.color, "greem");

   printstructure(citizen);

   return EXIT_SUCCESS;
}

void printstructure(struct person individual){
   printf("First name: %s\n", individual.firstname);
   printf("Last name: %s\n", individual.lastname);
   printf("Eye color: %s\n", individual.color);
   printf("Age: %d\n", individual.age);
   printf("Height: %.2f\n", individual.height);

}

