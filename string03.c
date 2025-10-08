#include <stdio.h>
#include <string.h>
 // to print the no of alphabet in a word 
int main() {
    char str[]="coading";
    int ln = strlen(str);
    int freq[256] = {0};  // Array to store frequency of each character

    // printf("Enter a word: ");
    //  scanf("%s", str); 

    for (int i = 0;i<ln; i++) {
        freq[str[i]]++;  
    }

  //  printf("Char Frequency:\n");
    for (int i = 0; i < 256 ; i++) {
     if(freq[i] >0){
           printf("%c :  %d\n",i , freq[i]);
     }
    }

    return 0;
}
