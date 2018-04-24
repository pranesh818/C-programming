#include<stdio.h>
int main()
{
  int a; // declaration of variable
  printf ("\n enter the number:");  
  scanf("%d",&a);
  if (a>=1&&a<100000)  //condition for checking positive or not
    {
        printf("\n positive");
    }
  else if(a==0)      // condition for checking equal to zero
    {
      printf("\n zero");
    }
  else if(a<0)    // condition for checking negative or not
    {
        printf("\n  negative");
    }
  else
    {
      printf("\n Invalid");
    }
}
