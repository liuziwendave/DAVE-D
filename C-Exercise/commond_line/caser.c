#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void positive_shift(int x);
void negative_shift(int y);


int main(int argc,char **argv){
   
   int cln;        //commond-line-number
   cln=atoi(argv[1]);
   if(cln>0){
      positive_shift(cln);
   }else if(cln<0){
      negative_shift(cln);
   }
   
   return EXIT_SUCCESS;
}

void positive_shift(int x){
   if(x>=26){
      x=(x%26);
   }

   int ch, process_num;
   while((ch=getchar())!=EOF){
      process_num=ch+x;

       if(islower(ch) && (process_num > 'z')){
          process_num = (process_num - 26);
       }

       if(isupper(ch) && (process_num > 'Z')){
          process_num = (process_num - 26);
       }

       if(isalpha(ch)){
          putchar(process_num);
       }else{
          putchar(ch);
       }

      }
}

void negative_shift(int y){
   if(y<=-26){
      y=(y%-26);
   }

   int ch, process_num;
   while((ch=getchar())!=EOF){
      process_num=ch+y;

       if(islower(ch) && (process_num < 'a')){
          process_num = (process_num + 26);
       }

       if(isupper(ch) && (process_num < 'A')){
          process_num = (process_num + 26);
       }

       if(isalpha(ch)){
          putchar(process_num);
       }else{
          putchar(ch);
       }

      }
}

