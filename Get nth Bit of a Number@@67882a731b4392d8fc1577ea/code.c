#include<stdio.h>
int main()
{
    int num,n,bit;
    printf("");
    scanf("%d",&num);
    printf("");
    scanf("%d",&n);
    if(n<0||n>31){
        printf("");
        return 1;
    }
    bit = (num>>n)&1;
    printf("%d",bit);
    return 0;
}