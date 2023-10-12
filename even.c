#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);

    if(n%2 == 0)
   {
     printf("the given value is even");
   }
   else
   {
    printf("the given value is odd");
   }
   return 0;
}