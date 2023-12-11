#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=3*n;i++)
    {
        if(i%3==0)
        {
            printf("%d ",i);
        }
    }
}