#include<stdio.h>

int main(){

    float p,r,n;

    printf("Enter Value Of P(Principal)...");
    scanf("%f",&p);
    printf("Enter Value Of R(Rate)...");
    scanf("%f",&r);
    printf("Enter Value Of N(Time)...");
    scanf("%f",&n);

    printf("Simple Interest Is...%f",p*r*n/100);

}