#include<stdio.h>
#include<math.h>
int main (){
    float principal,rate,time;
    float simpleinterest,compoundinterest ;
    printf("Enter principal:");
    scanf("%f", &principal);
    printf("Enter rate of interest:");
    scanf("%f", &rate);
    printf("Enter time (in years):");
    scanf("%f", &time);
    simpleinterest=(principal*rate*time)/100;
    compoundinterest = principal*(pow((1 + rate/100), time))-principal;
    printf("simpleinterest= %.2f \n", simpleinterest);
    printf("compoundinterest= %.2f \n", compoundinterest);
    return 0;
}
