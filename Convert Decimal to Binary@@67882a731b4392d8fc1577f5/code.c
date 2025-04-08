#include<stdio.h>
void printbinary(unsigned int num)
{
    int i;
    for(i=31;i>=0;i--)
    {
        int bit =(num>>i)&1;
        printf("%d",bit);
        if(i%4==0)
        printf("");
    }
    printf("\n");
}
int main()
{
    unsigned int num;
    printf("");
    scanf("%u",&num);
    printf("");
    printbinary(num);
    return 0;
}