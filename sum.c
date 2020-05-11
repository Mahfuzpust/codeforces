#include<stdio.h>
int main()
{
    int t;
    int a,b;
    int sum;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("%d\n",sum);
    }

}
