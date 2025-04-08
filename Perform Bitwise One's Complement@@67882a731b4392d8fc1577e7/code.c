#include<stdio.h>
int main()
{
    int num, result;
    printf("Enter an integer: ");
    scanf("%d",&num);
    result = ~num;
    printf("Original number: %d\n", num);
    printf("One's complement: %d\n", result);
    return 0;
}