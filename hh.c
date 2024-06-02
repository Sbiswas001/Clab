#include <stdio.h>

int main() {
    int arr[100]; 
    int n, i;
    int sum = 0;
    int min, max;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];

    for (i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    float average = (float)sum / n;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}
