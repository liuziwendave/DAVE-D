#include <stdio.h>
#include <stdlib.h>
//#include "sorting.h"

void searchdata(float standard,float dataset[], int memory);
void printarray(float dataset[], char dataname[], int memory);

int main (int argc, char **argv){
   float mpgdata[10]={12.3,123.12,12.345,345.23,2345.45,23.23,33.33,44.44,55.55,1.1};   
   
   searchdata(30.0, mpgdata,10);
  // sort(mpgdata,10); 
   return EXIT_SUCCESS;
}
void searchdata(float standard, float dataset[],int memory){
      printf("For searching data.\n");
      printarray(dataset,"mpgdata",memory);
      printf("car rated over 30: \n");
      for(int i=0;i<memory;i++){
	 if(dataset[i]>standard)
	    printf("Car %d has MPG: %f\n", i, dataset[i]);
      }  
}

void printarray(float dataset[], char dataname[], int memory ){
   for(int i=0;i<memory;i++){
	 printf("%s[%d]: %f\n",dataname,i,dataset[i] );
   }
}
