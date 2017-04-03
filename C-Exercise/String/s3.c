#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char **argv){
   char arr[1023];
   int ch,i=0;
   while((ch=getchar())!='\n'){
      arr[i]=ch;
      if(arr[i]=='a'){
         arr[i]=' ';
      }
      i++;
      //putchar(ch);
   }
   arr[i]='\0';

   printf("%s\n", arr);
   return EXIT_SUCCESS;
}
