#include <stdio.h>
#include <stdlib.h>

//Global Variable;
float accountbalance, amount;

//Prototypes declarations
void initializeaccount(void);
void getbalance(void);
void askcustomer(void);
void updateaccount(float amount);
void addgift(float giftamount);
void thankyou(void);

int main (int argc, char **argv){
   initializeaccount();
   getbalance();

//Performe first transation;
   askcustomer();
   updateaccount(amount);
   getbalance();

//Performen second transation;
   askcustomer();
   updateaccount(amount);
   addgift(5.0);
   getbalance();

//Performe third transation;
   askcustomer();
   updateaccount(amount );
   addgift(2.0);
   getbalance();
   thankyou();
   printf("\n");

   return EXIT_SUCCESS;
}

void initializeaccount(void){
   accountbalance= 0.0;
}

void addgift(float giftamount){
   accountbalance += giftamount;
   printf("You have %.2f amount of gift addded to your account\n", giftamount);

}

void askcustomer(void){
   printf("Nest transation please...\n");
   printf("Input amount to credit(positive) or debit(negative): ");
   scanf("%f", &amount);
}

void updateaccount(float amount){
   accountbalance += amount;
   printf("The account was updated with $%.2f\n", amount);
}

void getbalance(void){
   printf("\nThe current balance in the account balance is $%.2f\n", accountbalance);
}

void thankyou(void){
   puts("------Thank You-----");
}

