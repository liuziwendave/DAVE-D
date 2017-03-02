#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#define namelength 10
#define colorlength 10
#define max_name 5
#define max_color 5
#define max_age 120
#define max_team 10

struct person{
	       char firstname[namelength];//each name length
	       char lastname[namelength];
	       char color[colorlength];//each color length
	       int age;
	       float height;
};


char bankoffirstname[max_name][namelength]={"Dave", "Baby", "John", "dsff","wefwe"};
char bankoflastname[max_name][namelength]={"FFF","fwefwef","fewf", "qwer", "wefb"};
char bankofcolors[max_color][colorlength]={"green", "balck","blue", "yellow", "pink"};


struct person team[max_team];


void arrayofstructure(void);
void printstru(void);


int main (int argc, char **argv){
   arrayofstructure();
   printstru();

   return EXIT_SUCCESS;
}

void arrayofstructure(void){
   srand(time(NULL));

   for(int i=0;i<max_team;i++){
      int rf=rand()%max_name;
      int rl=rand()%max_name;
      int rc=rand()%max_color;
      
      strcpy(team[i].firstname, bankoffirstname[rf]);
      strcpy(team[i].lastname, bankoflastname[rl]);
      strcpy(team[i].color, bankofcolors[rc]);
      team[i].age=rand()%max_age;
      team[i].height=rand()%3+4.0+(rand()%10)/10.0;
   }
}

void printstru(void){
   for(int i=0;i<max_team;i++){
	 printf("First name:[%8s]\t", team[i].firstname);
	 printf("Last name: [%8s]\t", team[i].lastname);
	 printf("Eyecolor: [%8s]\t", team[i].color);
	 printf("Age: [%8d]\t", team[i].age);
	 printf("Height:[%8f]\n", team[i].height);
   }
   
}






