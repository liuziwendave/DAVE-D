#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define data_size 10

void getnumbers(void);
void assign_numbers(void);
void getbar(int length);

int dataset[data_size];

int main (int argc, char **argv){
   getnumbers();
   assign_numbers();
                    
   return EXIT_SUCCESS;
}

void getnumbers(void){
   srand(time(NULL));
   for(int i=0; i<data_size; i++){
      dataset[i]=rand()%50;
   }
}

void assign_numbers(void){
   for(int i=0; i<data_size; i++){
      getbar(dataset[i]);
   }
}

void getbar(int length){
   printf("%3d", length);
   for(int i=0; i<length;i++){
      printf("!");
   }
   printf("\n");
}
