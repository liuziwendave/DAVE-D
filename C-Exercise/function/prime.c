#include <stdlib.h>
#include <stdio.h>

void get_num(void);
void process_num(int x,int y);
int test_num(int n);

int main(int argc, char **argv){
   get_num();
   printf("\n");
   return EXIT_SUCCESS;
}

void get_num(void){
   int num1,num2;
   printf("Input 2 numbers: ");
   scanf("%d %d", &num1, &num2);
   process_num(num1,num2);
}

void process_num(int x, int y){
   for(int i=x;i<=y;i++){
      int flag = test_num(i);
         if(flag==1){
            printf("%d ", i);
         }
   }
}

int test_num(int n){
   int flag=1;
   for(int j=2;j<=n/2;++j){
      if(n%j==0){
         flag=0;
         break;
      }
   }
      return flag;
}
