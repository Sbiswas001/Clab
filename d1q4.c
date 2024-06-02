#include <stdio.h>
#include <math.h>

int main() {
    float p,r,t,si,ci;
    printf("Enter principal amount, rate of interest, time period: ");
    scanf("%f%f%f",&p,&r,&t);
    si=p*r*t/100;
    ci=p*pow((1+r/100),t)-p;
    printf("Simple interest is %f",si);
    printf("\n");
    printf("Compound interest is %f",ci);
}