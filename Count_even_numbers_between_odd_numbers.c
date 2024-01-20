#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i+1]%2==1 && a[i]%2==0 && a[i-1]%2==1)
        c++;
    }
    printf("%d",c);
    }