#include<stdio.h>
int main()
{
    char singlequote = '\''; //single qoute character
    
    printf("single quote: %c\n",singlequote);
    
    char doublequote = '\"';
    
    printf("double quote: %c\n",doublequote);
    
    char backslash = '\\';
    
    printf("backslash: %c\n",backslash);
    
    printf("hello\nworld\n");
    
    printf("tabbed\t\t\ttext\n");
    
    printf("back\bspace\n");

    printf("carriage\rreturn\n");

    printf("form\ffeed\n");

    printf("vertical\vtab\vcharacter\vdisplay\n");

    char nullchar = '\0';

    printf("null character: %c\n",nullchar);

    printf("beep\a\n");

    char questionmark = '\?';

    printf("question mark: %c\n",questionmark);

    char hexvalue = '\x86';

    printf("hex value: %c\n",hexvalue);

    return 0;
}