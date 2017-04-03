#include <stdio.h>
#include <stdlib.h>

void func1(int arr[]);
void func2(int *arr);

int main (int argc,char **argv){
   int list[6]={1,2,3,4,5,6};
   func1(list);
   func2(list);
   return EXIT_SUCCESS;
}

void func1(int arr[]){
   printf("array[3]=%d\n", arr[3]);
}

void func2(int *arr){
   printf("array[3]=%d\n", arr[3]);

}
