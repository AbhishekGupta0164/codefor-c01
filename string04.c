#include <stdio.h>
 // to remove common numbers from two arrays
int main() {
    int arr1[] = {1, 2, 3, 4, 3, 2, 1};
    int arr2[] = {3, 4, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Unique numbers after removing common:\n");

    // Print unique elements from arr1
    for (int i = 0; i < n1; i++) {
        int found = 0;
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;  // Common element found
                break;
            }
        }
        if (!found) {
            printf("%d ", arr1[i]);
        }
    }

    // Print unique elements from arr2
    for (int i = 0; i < n2; i++) {
        int found = 0;
        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;  // Common element found
                break;
            }
        }
        if (!found) {
            printf("%d ", arr2[i]);
        }
    }

    printf("\n");
    return 0;
}
