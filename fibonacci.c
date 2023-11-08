#include <stdio.h>
int main()
{
    int a = 0, b = 1,limit,i;
    printf("enter value of limit:");
    scanf("%d",&limit);
    for (i = 0; i<limit; i++)
    {
        printf("%d\n",a);
        printf("%d\n",b);
        a = a + b;
        b = a + b;
    }
return 0;    
}