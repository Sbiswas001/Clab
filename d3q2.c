#include <stdio.h>

int main() {
    int upperLimit;

    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);

    printf("Numbers not multiples of 3 up to %d are:\n", upperLimit);
    
    for (int i = 1; i <= upperLimit; i++) {
        if (i % 3 == 0) 
            continue;
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}
