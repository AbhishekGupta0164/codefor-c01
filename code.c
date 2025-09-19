#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 5, 1};  // Palindrome array
    int istrue = 1;

    for (int i = 0; i < 5 / 2; i++) {
        if (arr[i] != arr[5 - i - 1]) {
            istrue = 0;
            break; // no need to check further
        }
    }

    if (istrue == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}


// int maxArraySum(int arr[] ,int n, int k)
// {
//     int wSum=0;
//     for( int i=0;i<k;i++){
//         wSum= wSum+arr[i];
//     }
//     int maxSum=wSum;
//     for( int j=k;j<n;j++){
//         wSum=wSum+arr[j]-arr[j-k];
//         if(wSum>maxSum){
//             maxSum=wSum;
//         }
//     }
//     return maxSum;
//    }

// int maxSum=INT_MIN;
//     // int arr[7]={-1,2,4,5,-4,3,-7};

// for(int i=0;i<=n-k;i++){
//     int currSum=0;
//     for(int j=i;j<i+k;j++){
//         currSum=currSum+arr[j];

//     }
//     if(currSum>maxSum){
//         maxSum=currSum;
//     }
// }
// return maxSum;

// int main(){
//     int arr[7]={-1,2,4,5,4,3,7};
//     int k=3;
//      int n= sizeof(arr)/sizeof(arr[0]);
//   int data= maxArraySum(arr,n,k);
//   printf("%d",data);

// }

// int i,n;

// int arr[5]={1,8,9,6,5};
//    int max = arr[0];
//      for(i=1;i<5;i++){
//         if(arr[i]>max);
//         max=arr[i];

//      }
//      printf("max no =%d\n",max);
