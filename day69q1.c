//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int repeated_element = -1;
    for (int i = 0; i < n; i++) {
        if (arr[abs(arr[i])] >= 0) {
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        } else {
            repeated_element = abs(arr[i]);
            break;
        }
    }

    if (repeated_element != -1) {
        printf("The repeated element is: %d\n", repeated_element);
    } else {
        printf("No repeated element found.\n");
    }

    return 0;
}