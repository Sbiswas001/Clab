#include <stdio.h>

int main() {
    float num;
    printf("Enter number: ");
    scanf("%f",&num);
    int a= (int)(num+.5);
    printf("Rounded number is %d",a);
}