#include<stdio.h>
int main()
{
    int n,a,b,c,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        int sum=a+b+c;
        if(sum>1)
        {
            count++;
        }
    }
   printf("%d",count);
    return 0;
}

