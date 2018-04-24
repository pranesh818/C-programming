#include<stdio.h>
void main()
{
  int a; // declaration of variable
  printf ("\n enter the number:");  
  scanf("%d",&a);
  if (a>=1&&a<100000)  //condition for checking positive or not
    {
        printf("\nThe number is positive");
    }
  else if(a==0)      // condition for checking equal to zero
    {
      printf("\n the number is zero");
    }
  else if(a<0)    // condition for checking negative or not
    {
        printf("\n The number is negative");
    }
  else
    {
      printf("\n The number is invalid");
    }
}
