#include <stdio.h>
int main(){
    int num,i =2;
    int a = 1;
    printf("Enter the number:");
    scanf("%d",&num);
    
    if (num <= 1)
    {
        a = 0;
    } else
    
    {
        while (i <= num /2)
        {
            if (num % i == 0)
            {
            a = 0;
            break;
            }
      i++;  
        }
    }    
    if (a){
        printf("%d is a prime number.\n",num);
    } else {
        printf("%d is not a prime number.\n",num);
    }
 return 0;
}