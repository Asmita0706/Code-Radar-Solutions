#include<stdio.h>
int main()
{
    unsigned int num,result;
    printf("");
    scanf("%u",&num);
    result = ~num;
    printf("%u",result);
    return 0;
}