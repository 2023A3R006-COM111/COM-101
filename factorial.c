#include <stdio.h>
int main()
{
    int number;
    int factorial;
    printf("Enter a positive integer:");
    scanf("%d",&number);
    if(number < 0)
    {
        printf("Factorial is not define for negative number.\n");
    }
    else
    {
    for (int i= 1; i <= number; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d = %d\n", number, factorial);
    }
return 0;
}