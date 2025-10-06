#include <stdio.h>
#include <limits.h>



int main(){
// Sliding window method
"",,                                                               axArraywSum(int arr[], int n, int k) {
//     int wSum = 0;
//     for (int i = 0; i < k; i++) {
//         wSum += arr[i];
//     }

    //    int maxSum = wSum;

//     for (int j = k; j < n; j++) {
//         wSum = wSum + arr[j] - arr[j - k];
//         if (wSum > maxSum) {
//             maxSum = wSum;
//         }
//     }

//     return maxSum;
// }

int main() {
    int arr[7] = {1,8,5,4,1,6,7,2,3,9};   // only one array
    int k = 2 ,n ;
    int wsum,msum
     for (int i = 0; i < k; i++) {
        wSum += arr[i];
    }
     for (int i = k; i < n; i++) {
        wSum += arr[i]-arr[i-k];
        if(wSum>mSum){
            mSum=wSum;
        }


    }

printf("%d",mSum);
    int n = sizeof(arr) / sizeof(arr[0]);

    int bruteAns = maxArraySumBrute(arr, n, k);
    int windowAns = maxArraySumWindow(arr, n, k);

    printf("Brute Force Result = %d\n", bruteAns);
    printf("Sliding Window Result = %d\n", windowAns);

    return 0;
}


// }


