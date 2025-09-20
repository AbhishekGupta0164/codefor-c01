
#include <stdio.h>
#include <limits.h>

// Brute force method
int maxArraySumBrute(int arr[], int n, int k) {
    int maxSum = INT_MIN;
    for (int i = 0; i <= n - k; i++) {
        int currSum = 0;
        for (int j = i; j < i + k; j++) {
            currSum += arr[j];
        }
        if (currSum > maxSum) {
            maxSum = currSum;
        }
    }
    return maxSum;
}

// Sliding window method
int maxArraySumWindow(int arr[], int n, int k) {
    int wSum = 0;
    for (int i = 0; i < k; i++) {
        wSum += arr[i];
    }

    int maxSum = wSum;

    for (int j = k; j < n; j++) {
        wSum = wSum + arr[j] - arr[j - k];
        if (wSum > maxSum) {
            maxSum = wSum;
        }
    }

    return maxSum;
}

int main() {
    int arr[7] = {-1, 2, 4, 5, -4, 3, -7};   // only one array
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    int bruteAns = maxArraySumBrute(arr, n, k);
    int windowAns = maxArraySumWindow(arr, n, k);

    printf("Brute Force Result = %d\n", bruteAns);
    printf("Sliding Window Result = %d\n", windowAns);

    return 0;
}
