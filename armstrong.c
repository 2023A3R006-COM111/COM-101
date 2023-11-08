#include<stdio.h>
#include<math.h>
int main()
{
  int num,originalNum,remainder,n=0,result=0;
  printf("enter a number: ");
  scanf("%d",&num);
  
  originalNum=num;
  //Calculating the no. of digits
         while (originalNum!=0)
            {
                originalNum /=10;
                 ++n;
            }

  originalNum=num;
                    //Calculating if the number is armstrong or not
        while (originalNum!=0)
        {
            /* code */
            remainder=originalNum%10;
                result+=pow(remainder,n);
            originalNum/=10;
        }

    if (result==num)
        {
            printf("%d is an Armstrong number.\n",num);
         }

        else
        {
            printf("%d is not an Armstrong number.\n",num);
         }

  return 0;
  
} 