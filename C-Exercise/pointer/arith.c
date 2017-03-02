#include <stdio.h> 
#include <stdlib.h> 

int main (int argc, char **argv){
   int array[]={1,2,3,4,5}; 
  
   int numbers_of_elements=sizeof(array)/sizeof(int);
   for(int i=0; i<numbers_of_elements;i++){
      printf("%d\n", *ptr);
      ptr++;
   }

return EXIT_SUCCESS;

}
