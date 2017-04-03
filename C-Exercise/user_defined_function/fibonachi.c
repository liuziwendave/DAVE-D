#include <stdlib.h>
#include <stdio.h>


int fibo(int n){
   if(n==0){
      return 0;
   }else if(n==1){
      return 1;
   }else{
      return fibo(n-1)+fibo(n-2);
   }
}

void generatefibo(int num){
   int n=0;
   for(int i=0; i<num;i++){
      printf("[%2d]: %5d\n",n,fibo(n) );
      n++;
   }
}

int main (void){
   generatefibo(10);

   return EXIT_SUCCESS;
}
