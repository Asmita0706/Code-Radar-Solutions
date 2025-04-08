#include<stdio.h>
int main()
{
    int num, position =0;
    printf("");
    scanf("%d",&num);
    if(num==0){
        printf("");
        return 0;
    }
    while((num &1)==0){
        num=num>>1;
        position++;
    }
    printf("%d",position);
    return 0;
}