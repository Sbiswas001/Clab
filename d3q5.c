#include <stdio.h>

int main() {
    int n, number, found=0;
    
    printf("Enter the range (n): ");
    scanf("%d", &n);
    
    printf("Enter the number to be detected: ");
    scanf("%d", &number);
    
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i); 
        
        if (i == number) {
            found =1;
            printf("Number %d is detected.\n", number);
            break; 
        }
    }
    
    if (found==0)
    {
        printf("Number %d is not detected.\n", number);
    }
    

    return 0;
}
