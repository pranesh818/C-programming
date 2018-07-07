#include <stdio.h>
void main()
{
    char ch;

    
    printf("Input: ");
    scanf("%c",&ch);

    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("Output:Alphabet");
    else
        printf("Output:Not an alphabet");

    return 0;
}


