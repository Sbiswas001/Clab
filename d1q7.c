#include <stdio.h>
#include <math.h>

int main() {
    float r, area, cirfumference;
    printf("Enter radius: ");
    scanf("%f",&r);
    area=M_PI*r*r;
    cirfumference=2*M_PI*r;
    printf("Area of circle is %f\nCircumference of circle is %f",area,cirfumference);
}