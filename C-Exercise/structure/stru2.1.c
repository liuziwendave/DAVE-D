#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define max_length 30
#define max_c_length 10
#define max_age 50
#define max_amount 6
#define max_c_amount 3
#define max_citi_amount 5

//Global definition
struct person{
   char fname[max_length];
   char lname[max_length];
   int age;
   int height;
   char eyecolor[max_c_length];
};

//Bank of elements
char bankoffname[max_amount][max_length]={"Dave","Paul","Becky","Jenny","Bob","Candy"};
char bankoflname[max_amount][max_length]={"Lara","Vim","Georage","Jack","Jim","John"};
char bankofcolor[max_c_amount][max_length]={"Green","Balck","Red"};

//Array of 5 people
struct person citi[max_citi_amount];

//Function prototypes
void get_elements(void);
void printfstr(void);

int main(int argc,char **argv){
   get_elements();
   printfstr();
   
   return EXIT_SUCCESS;
}

//Function Definition
void get_elements(void){
   srand(time(NULL));//Seed the a random number;

   for(int i=0; i<max_citi_amount;i++){        //Because set max_citi_amount is 5, there only need 5 number.
      int rf=rand()%max_amount;
      int rl=rand()%max_amount;
      int rc=rand()%max_c_amount;
      strcpy(citi[i].fname,bankoffname[rf]);
      strcpy(citi[i].lname,bankoflname[rl]);
      strcpy(citi[i].eyecolor,bankofcolor[rc]);
      citi[i].age=rand()%max_age;
   }
}

/* The explanation of 'citi[i].fname':
 * For example:{ citi[2].fanme='BOB' }means that the first name of 2nd person in the 3rd position of array is BOB
 * */

void printfstr(void){
   for(int i=0; i<max_citi_amount;i++){
      printf("First name:[%9s]\t",citi[i].fname);
      printf("Last name:[%8s]",citi[i].lname);
      printf("\tAge:[%4d]\t", citi[i].age);
      printf("Eyecolor:[%6s]\n", citi[i].eyecolor);
   }

}












