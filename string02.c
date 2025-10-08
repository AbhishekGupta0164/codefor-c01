#include<stdio.h>
#include<string.h>
// to print the non-repeating word
int main(){
     char str[]="hii";
     int ln = strlen(str);
   
     for(int i=0;i<ln;i++){
          int count=0;
        for(int j =0;j<i;j++){
            if( str[i]==str[j]){
                count++;
                break;
            }
        }
        if(count==0){
            printf("%c",str[i]);
        }
     }
     return 0;
}