#include<stdio.h>
int main()
{
int rows;
scanf("%d",&rows);
for(int i =0;j< rows;i++)
{
    for(int j=0; j<rows-i;j++)
    {
        printf("* ");
    }
    printf("/n");
}
return 0;
}