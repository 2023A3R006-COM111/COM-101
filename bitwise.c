#include <stdio.h>
int main()
{
    int a,b;

    printf("Enter two integers:");
    scanf("%d%d",&a, &b);

    printf("the result of bitwise operator AND is :%d\n",a & b);

    printf("the result of bitwise operstor OR is :%d\n",a | b);

    printf("the result of bitwise operator XOR is :%d\n",a ^ b);

    printf("the result of bitwise operator NOT is :%d\n",~a);
    printf("the result of bitwise operator NOT is :%d\n",~b);
    
    printf("the result of bitwise operator LEFT SHIFT is :%d\n",a << 1);

    printf("the result of botwise operator RIGHT SHIFT is :%d\n",b >> 1);

return 0;
}    





