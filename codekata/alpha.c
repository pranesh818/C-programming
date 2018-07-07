#include <stdio.h>
int main()
{
    char ch;

    
    printf("Input: ");
    scanf("%c",&ch);

    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("Output:yes");
    else
        printf("Output:no");

    return 0;
}


