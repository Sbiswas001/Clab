#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, x1, x2;
    printf("Enter a, b and c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    d=b*b-4*a*c;
    if(d<0) {
        printf("The roots are imaginary.");
    } else if(d==0) {
        x1=(-b+sqrt(d))/(2*a);
        printf("The roots are equal and the root is %lf", x1);
    } else {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("The roots are %lf and %lf", x1,x2);
    }
}
