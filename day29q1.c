//Find the sum of array elements.

#include <stdio.h>
int main() {
    int arr[100], n, i, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }

    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}