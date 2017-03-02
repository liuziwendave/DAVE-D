#include <stdio.h>
#include <stdlib.h>

#define sale_points 100
#define buy_points 10

void checknum(void);
void processnum(int n);
void disnum(char m);

int main (int argc, char **argv){
   checknum();   
   return EXIT_SUCCESS;
}

void checknum(void){
   int num;
   printf("how many stock do you have: ");
   scanf("%d", &num);
   processnum(num);
}

void processnum(int n){
   if (n>sale_points)
      disnum('a');
   else 
      if(n<buy_points)
	 disnum('b');	 
      else 
	 if((n<=sale_points) && (n>=buy_points))
	    disnum('c');
}

void disnum(char m){
   switch(m){
      case 'a':
	 printf("Sale!!!\n");
      break;
      
      case 'b':
	 printf("Buy!!!\n");
      break;

      case 'c':
	 printf("Hold!!!\n");
      break;
   }
}
