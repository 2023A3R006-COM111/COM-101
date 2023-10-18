#include <stdio.h>
int main()
{
int I = 1;
int sum = 0;
do
{
    sum = sum + I;
    I = I +2;
}
while(sum < 40 && I <10);
printf("%d %d\n", I,sum);
return 0;
}