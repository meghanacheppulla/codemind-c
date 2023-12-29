#include<stdio.h>
int main()
{
    int N,t,i=1,sum=0;
    scanf("%d",&N);
    for(t=N;i<N;i++)
    {
        if((N%i)!=0)
        {
            continue;
        }
        else
        {
            sum=sum+i;
        }
    }
    if(sum>t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
