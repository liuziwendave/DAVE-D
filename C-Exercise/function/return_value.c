#include <stdlib.h>
#include <stdio.h>

int totalpoints(int p1, int p2,int p3,int p4);
float averagepoints(int p1,int p2,int p3,int p4);
float two_rate(int totalshots, int twoshots);
float three_rate(int totalhshots , int threeshots);
void display(int totalshots, int total2shots, int total3shots, float two_rate, float three_rate, float average_per_shot);

int main (int argc, char **argv){
   int twop1;
   int threep1;
   int totalp1;

   int twop2;
   int threep2;
   int totalp2;

   int twop3;
   int threep3;
   int totalp3;

   int twop4;
   int threep4;
   int totalp4;

   printf("Input total shots of 1st player: ");
   scanf("%d", &totalp1);
   printf("Input two points shots of 1st player: ");
   scanf("%d", &twop1);
   printf("Input three points shots pf 1st player: ");
   scanf("%d", &threep1);

   printf("Input total shots of 2nd player: ");
   scanf("%d", &totalp2);
   printf("Input two points shots of 2nd player: ");
   scanf("%d", &twop2);
   printf("Input three points shots of 2nd player: ");
   scanf("%d", &threep2);

   printf("Input total points of 3rd player: ");
   scanf("%d", &totalp3);
   printf("Input two points shots of 3rd player: ");
   scanf("%d", &twop3);
   printf("Input three points shots of 3rd player: ");
   scanf("%d", &threep3);

   printf("Input total points of 4th player: ");
   scanf("%d", &totalp4);
   printf("Input two points shots of 4th player: ");
   scanf("%d", &twop4);
   printf("Input three points shots of 4th player: ");
   scanf("%d", &threep4);


   int alltotalpoints=totalpoints(totalp1, totalp2, totalp3, totalp4);
   int twopoints= totalpoints(twop1, twop2,twop3,twop4);
   int threepoints=totalpoints(threep1, threep2,threep3, threep4);
   
   float alltworate=two_rate(alltotalpoints, twopoints);
   float allthreerate=three_rate(alltotalpoints, threepoints);
   float allaveragepoints=averagepoints(totalp1, totalp2, totalp3, totalp4);
    
   display(alltotalpoints, twopoints, threepoints, alltworate, allthreerate, allaveragepoints);

   return EXIT_SUCCESS;
}

int totalpoints(int p1, int p2, int p3, int p4){
   float sum= p1+p2+p3+p4;
   return sum;
}

float averagepoints(int p1, int p2, int p3, int p4){
   float average=(p1+p2+p3+p4)/4.0;
   return average;
}

float two_rate(int totalshots, int twoshots){
   float performance=((float)twoshots/(float)totalshots*100.0);
   return performance;
}

float three_rate(int totalshots , int threeshots){
   float performance=((float)threeshots/(float)totalshots*100.0);
   return performance;
}
void display(int total, int total2, int total3, float two_r, float three_r, float average_per_shot){
   printf("----Outputs----\n");
   printf("Total attempts: %d\n", total);
   printf("Total 2-points made: %d\n", total2);
   printf("Total 3-pointd made: %d\n", total3);
   printf("Success rates of 2-points shots: %.2f\n", two_r);
   printf("Success rates of 3-points shots: %.2f\n", three_r);
   printf("Average pointd per player: %.2f\n",average_per_shot);
}



