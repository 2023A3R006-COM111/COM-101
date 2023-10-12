#include<stdio.h>
int main()
{
    int sum =0;
    int n=1;
 loop:
 sum =sum + n*n;
 if (n==10)
    goto print;
 else
 {
    n=n+1;
    goto loop;
 }      
 print:
 printf("The sum of square of integer from 1to10 is:%d\n",sum);
 return 0;
}