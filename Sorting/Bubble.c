// Bubble Sort
#include<stdio.h>

void main() {
    int arr[] = {5, 4, 3, 2, 1};
    // Run the step n - 1 times
    for (int i = 0; i < 5; i++)
    {
        // for each step, max item will come at last index ⁂ n - i
        for (int j = 1; j < 5 - i; j++)
        {
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
}