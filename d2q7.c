#include <stdio.h>
#include <math.h>

int main() {
    double x, n, y;
    printf("Enter x and n: ");
    scanf("%lf%lf",&x,&n);
    if(n==1) {
        y=1+x;
    } else if(n==2) {
        y=1+x/n;
    } else if(n==3) {
        y=1+pow(x,n);
    } else {
        y=1+n*x;
    }
    printf("Value of Y is %lf", y);
}