#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

void printarray(char name[], float array[], int memory);
void sort(float dataset[], int memory);

int main(int argc, char **argv){
   float  msgdata[5]={342.23,5555.42,257.55,657.44,456.21};
   sort(msgdata,5);
   return EXIT_SUCCESS;
}

void sort(float dataset[], int memory){
      printarray("MSGdata",dataset,memory);
      printf("\n");
      
      float temp;
      int swaped;
      do{
            swaped=FALSE; 
	    for(int i=0; i<memory;i++){
	       if(dataset[i-1]>dataset[i]){
	 		  temp=dataset[i-1];
		  	  dataset[i-1]=dataset[i];
			  dataset[i]=temp;
		  	  swaped=TRUE;
	       }
	    }
      }while(swaped);
      printarray("MSGdata", dataset, memory);	    
}

void printarray(char name[], float array[], int memory){
   for(int i=0; i<memory;i++){
	 printf("%s[%d]: %.2f\n", name, i, array[i]);
   }

}


/*For the future review:
 * 1. the swaped =False and swaped=True: first the programe go through the "do_while" loop, in the
 * line 23 the value of swaped is "false", then go to the "if" statement, in the statement the
 * swaped is "TRUE", and then the TRUE value of swaped go to the while so the loop continue.
 * Finally, the array is sorted, and for statement is line 25 could not be used. the swaped will not
 * change the value after the line 23 which is false, so the loop will stop. 
