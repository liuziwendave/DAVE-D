#include <stdio.h>
#include <stdlib.h>

//protypes functions
void arc(void);
void ewv(void);
void pd(void);
void gr(void);

//global varibales
int room1, room2, room3;
int vistors1, vistors2,vistors3;
int totalseats, totalwaitingvistors;


int main (int argc, char **argv){

   arc();
   ewv();
   pd();
   gr();

   return EXIT_SUCCESS;
}

void arc(){
   printf("Seats in room1: ");
   scanf("%d", &room1);
   printf("Seats in room2: ");
   scanf("%d", &room2);
   printf("Seats in room3: ");
   scanf("%d", &room3);
}

void ewv(){
   printf("Input waiting customers in room 1: ");
   scanf("%d", &vistors1);
   printf("Input waiting customers in room 2: ");
   scanf("%d", &vistors2);
   printf("Input waiting customerss in room 3: ");
   scanf("%d", &vistors3);
}

void pd(){
   totalseats=room1+room2+room3;
   totalwaitingvistors=vistors1+vistors2+vistors3;
}

void gr(){
   printf("There are seats availible (1=Yes,0=No): %d\n", (totalseats>totalwaitingvistors));
   printf("Room 1 can accept more vistors (1=Yes, 0=No): %d\n", (room1>vistors1));
   printf("Room 2 can accept more vistors (1=Yes, 0=No): %d\n", (room2>vistors2));
   printf("Room 3 can accept more vistors (1=Yes, 0=No): %d\n", (room3>vistors3));
   printf("There are %.2f vistors waiting per room\n",((vistors1+vistors2+vistors3)/3.0));
}
