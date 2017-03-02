#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, char **argv){
   printf("Input letters: ");
   char c;//=getchar();
//   char x;
   
  /* do{
      c=getchar();
      x=toupper(c);
   printf("%c", x);
   }while(c!='\n');
*/ int value=0;
   do {
      c=getchar();
      switch(toupper(c)){
	 case'A':case'E':case'I':case'L':case'N':case'O':case'R':case'S':case'T':case'U':
				 value+=1;
				 break;
	 
	 case'B':case'C':case'M':case'P':
				 value+=3;
				 break;
	 case'F':case'H':case'V':case'W':case'Y':
				 value+=4;
				 break;
	 case'D':case'G':
				 value+=2;
				 break;
	 case'J':case'X':
				 value+=8;
				 break;
	 case'Q':case'Z':
				 value+=10;
				 break;
	 case'K':
				 value+=5;
				 break;
      }

      }while(c!='\n');
      
   printf("Value: %d\n",value);
   return EXIT_SUCCESS;
}
