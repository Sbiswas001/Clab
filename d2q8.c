#include <stdio.h>
#include <math.h>

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    if(marks>=80 && marks<=100) {
        printf("Honours");
    } else if(marks>=60 && marks<80) {
        printf("First Division");
    } else if(marks>=50 && marks<60) {
        printf("Second Division");
    } else if(marks>=0 && marks<50) {
        printf("Fail");
    }
}