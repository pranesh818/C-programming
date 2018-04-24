#include<stdio.h>
int main()
{
  char a;
  printf("\n enter  the character:");
  scanf("%c",&a);
  
  switch(a)
    {     
          case 'a':
          case  'e':
          case  'i':
          case  'o':
          case  'u':
          case 'A':
          case  'E':
          case  'I':
          case  'O':
          case  'U':
                  printf("\n vowel");
                  break;
          default:
                  printf("\n consonant");
    }
              
}
