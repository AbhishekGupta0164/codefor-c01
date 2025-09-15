
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

    return 0;
}