//This program takes n number of element from user (where, n is specified by user), stores data in an array and calculates the average of those numbers.

#include <stdio.h>
#include <stdlib.h>

void get_memory(void);
void get_num(int x);

int main(int argc,char **argv){
   get_memory();
   return EXIT_SUCCESS;
}

void get_memory(void){
   int num;
   printf("How many numbers do you want input: ");
   scanf("%d", &num);
   get_num(num);
}

void get_num(int x){
   int arr[x], average;
   int sum=0;
   printf("Input numbers: ");
   for(int i=0; i<x;i++){
      scanf("%d", &arr[i]);
      sum=sum+arr[i];
   }
   average=sum/x;
   printf("Average: %d\n", average);
}
