#include<stdio.h>
int countleadingzeros(unsigned int num){
int count = 0;
for(int i=31;i>=0;i--){
    if((num>>i)&1)
    break;
    count++;
}
return count;
}
int main(){
    unsigned int num;
    printf("");
    scanf("%u",&num);
    int leadingzeros = countleadingzeros(num);
    printf("%d",leadingzeros);
    return 0;
}