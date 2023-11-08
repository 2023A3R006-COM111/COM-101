#include <stdio.h>
int main()
{
char alphabet;
printf("enter the alphabet:");
scanf("%c",& alphabet);
 if ((alphabet == 'a' || alphabet == 'b' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
    alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'u'))
    {
        printf("%c is vowel.\n",alphabet);
    }
else if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'))
    {
        printf("%c is a consonant.\n",alphabet);

    }    
else
    {
        printf("Invaid input. Please enter a alphabet\n");
    }
return 0;
}