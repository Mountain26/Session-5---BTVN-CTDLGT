#include <stdio.h>
int sum(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n - 1] + sum(arr, n - 1);
}
int main() {
    int n;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    int result = sum(arr, n);
    printf("The sum of all elements is: %d\n", result);
}