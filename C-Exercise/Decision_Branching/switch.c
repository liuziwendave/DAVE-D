#include <stdio.h>
#include <stdlib.h>

void checklight(void);
void processlight(char c);
void stopdriving(void);
void godriving(void);
void getready(void);
void wrong(void);

int main (int argc, char **argv){
   checklight();
   return EXIT_SUCCESS;
}

void checklight(void){
   char light;
   printf("Input light: ");
   scanf("%c", &light);
   processlight(light);
}

void processlight(char c){
   switch(c){
   case 'r': 
      stopdriving();
      break;
   
   case 'y':
      getready();
      break;

   case 'g':
      godriving();
      break;

   default:
      wrong();
   }
}

void stopdriving(void){
   printf("STOP\n");
}

void godriving(void){
   printf("GO!!!\n");
}

void getready(void){
   printf("Get Ready\n");
}

void wrong(void){
   printf("Wrong light, check!!\n");
}
