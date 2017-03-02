#include <stdio.h>
#include <Stdlib.h>

#define num_row 2
#define num_col 3

void printtable(int table[][num_col]);

int main (int argc, char **argv){
   int table[num_row][num_col]={
      {142,2434,3434},
      {345,345,56},
   };

   printtable(table);

   return EXIT_SUCCESS;
}
void printtable(int table[][num_col]){
	 printf("Table:\n ");
	 for(int i=0;i<num_row;i++){
	    for(int k=0;k<num_col;k++){
		  printf("%6d",table[i][k]);
	    }
	    printf("\n");
	 }

}
