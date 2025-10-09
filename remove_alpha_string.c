#include <stdio.h>
#include <string.h>
// remove repeating alphabet in a word
int main()
{    char str[] = "hello";
    char target = 'l';
    int nstr[100];
    
    int j = 0;
    int ln = strlen(str);
    for (int i = 0; i < ln; i++)
    {
        if (str[i] != target)
        {
            nstr[j] = str[i];
            j++;
        }
    }
    nstr[j]='\0';
    printf("%s",nstr);
    return 0;
}