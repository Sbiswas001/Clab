#include <stdio.h> 

int removeDuplicates(int arr[], int n) 
{ 
	if (n == 0 || n == 1){ 
		return n; 
    }
	int temp[n]; 

	int j = 0; 

	for (int i = 0; i < n - 1; i++){ 
		if (arr[i] != arr[i + 1]){ 
			temp[j] = arr[i];
            j++;
            } 
    }

	temp[j++] = arr[n - 1]; 

	for (int i = 0; i < j; i++) 
		arr[i] = temp[i]; 

	return j; 
} 


int main() 
{ 
	int size, n;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter element no. %d \n", i+1);
        
        scanf("%d", &n);
        arr[i] = n;
    }
	n = sizeof(arr) / sizeof(arr[0]); 

	n = removeDuplicates(arr, n); 

	for (int i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	return 0; 
}