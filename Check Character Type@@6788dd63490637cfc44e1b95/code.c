#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(x=='a'|| x=='e'|| x=='i'|| x=='o'|| x=='u')
    {
        printf("Vowel");
    }
    else if(a>='0'&& a<=9)
    {
        printf("Digit");
    }
    else if(a=='!'|| a=='@'|| a=='#'|| a=='$'|| a=='%'|| a=='&'|| a=='*'|| a=='('|| a==')')
    {
        printf("Special Character")
    }
    else{
        printf("Consonant")
    }
}