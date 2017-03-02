#include <stdio.h>
#include <stdlib.h>

void checklight(void);
void processlight(char c);

int main(int argc, char **argv){
   checklight();
   return EXIT_SUCCESS;
}
void checklight(void){
   char light;
   printf("Input traffic light(r=red, y=yellow, g=green): ");
   scanf("%c",&light);
   processlight(light);
}

void processlight(char c){
   if (c=='r')
      printf("Stop!!!\n");
   else 
      if (c=='g')
	 printf("GO!!!\n");
      else
	 if (c=='y')
	    printf("Prepare to stop\n");
	    else
	       printf("Unrecognized lights\n");

}
