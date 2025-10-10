#include <stdio.h>

// Brute force method
int maxArraySumBrute(int arr[], int n, int k) {
    int maxSum = 0;
    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = 0; j < k; j++) {
            sum += arr[i + j];
        }
        if (sum > maxSum) {
            maxSum = sum;
        }
    }
    return maxSum;
}

// Sliding window method
int maxArraySumWindow(int arr[], int n, int k) {
    int wSum = 0;
    // sum of first k elements
    for (int i = 0; i < k; i++) {
        wSum += arr[i];
    }

    int maxSum = wSum;

    // slide the window
    for (int i = k; i < n; i++) {
        wSum = wSum + arr[i] - arr[i - k];
        if (wSum > maxSum) {
            maxSum = wSum;
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {1, 8, 5, 4, 1, 6, 9};   // array
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);  // initialize n

    // Using brute force
    int bruteAns = maxArraySumBrute(arr, n, k);

    // Using sliding window
    int windowAns = maxArraySumWindow(arr, n, k);

    printf("Brute Force Result = %d\n", bruteAns);
    printf("Sliding Window Result = %d\n", windowAns);

    return 0;
}

