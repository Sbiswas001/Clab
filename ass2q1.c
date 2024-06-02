#include<stdio.h>
int main(){
    int n=7;
    for (int i = 1; i <= (n+1)/2; i++){
        for (int j = 1; j <= 2*i-1; j++){
            printf("%d", 2*i-1);
        }
        for (int j = 1; j <= 3*(((n+1)/2)-i); j++){
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++){
            printf("%d", 2*i-1);
        }
        printf("\n");
    }
    for (int i = (n+1)/2+1; i <= n; i++){
        for (int j = 1; j<= (2*n+1)-2*i; j++){
            printf("%d", (2*n+1)-2*i);
        }
        for (int j = 1; j <= 3*(i-((n+1)/2)); j++){
            printf(" ");
        }
        for (int j = 1; j<= (2*n+1)-2*i; j++){
            printf("%d", (2*n+1)-2*i);
        }
        printf("\n");
    }
 return 0;
}