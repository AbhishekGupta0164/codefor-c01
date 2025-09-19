

#include <stdio.h>
#include <limits.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int first=arr[0];

    for(int i=0;i<5;i++){
    arr[i]=arr[i+1];
  
}
arr[4]=first;
for(int k=0;k<5;k++){
printf(arr);
}
print(arr);
}
