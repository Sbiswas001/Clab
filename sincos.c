#include <stdio.h>

int main() {
    int rows = 3;
    char ch = 'A';

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        ch++;
        printf("\n");
    }

    return 0;
}
