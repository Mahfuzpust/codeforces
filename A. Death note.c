#include<stdio.h>
int main()
{
    int n,i,c=0;
    int m,a[123456];
    scanf("%d",&n);
    scanf("%d",&m);


        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);

        }
        for(i=0;i<n;i++)
        {
             c=a[i]/m;
            printf("%d ",c);
            a[i+1]=a[i+1]+(a[i]-m*c);
        }
}
