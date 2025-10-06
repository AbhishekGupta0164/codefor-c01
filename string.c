#include <stdio.h>
#include<string.h>

// to check the palindrom
int main()
{

    char name[] = "madam";
    int ln = strlen(name);
    int isTrue = 1;
    for (int i = 0; i < ln / 2; i++)
    {
        if (name[i] | name[ln - i - 1])
        {
            isTrue == 0;
            break;
        }
    }
    if (isTrue)
    {
        printf("palindrom");
    }
    else
    {
        printf("not palindrom");
    }
}