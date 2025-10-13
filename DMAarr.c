#include <stdio.h>
#include <stdlib.h>
// This program rearranges an array 0 , -ve then +ve values
int main() {
    int n, j = 0;
    printf("enter size: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *temp = (int *)malloc(n * sizeof(int));

    // move 0s first
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            temp[j] = arr[i];
            j++;
        }
    }

    // move negatives next
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            temp[j] = arr[i];
            j++;
        }
    }

    // move positives last
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            temp[j] = arr[i];
            j++;
        }
    }

    printf("\nRearranged array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    
    return 0;
}
