#include<stdio.h>
int main()
{
    int N,num,fd,ld;
    scanf("%d",&N);
    ld=N%10;
    while(N>=10)
    {
        N=N/10;
    }
    fd=N;
    printf("%d",fd+ld);
}