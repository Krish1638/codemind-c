#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int c=0;
    for(;a!=0;c++,a=a/10){ }
    printf("%d",c);
}