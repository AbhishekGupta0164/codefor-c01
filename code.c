
#include<stdio.h>



int main() {
int i,n;

int arr[5]={1,8,9,6,5};
   int max = arr[0];
     for(i=1;i<5;i++){
        if(arr[i]>max);
        max=arr[i];
 

     }
     printf("max no =%d\n",max);

//    if(a>b && b<a){
//     printf("%d",a);
//    }
//    else if(b>a && a<b){
//     printf("%d",b);
//    }
// int arr[5]={1,2,3};
// int sum = 0;
// for(int i=0;i<3;i++){
//     sum = sum+arr[i];

// }
//  printf("%d",sum);
    return 0;
}