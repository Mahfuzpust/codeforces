#include<stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,a,b,c,d,sum[5000];
    scanf("%d",&n);
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        sum[i]=a+b+c+d;

    }
    int ans = 0, max = sum[0];
    for(i = 0; i < n; ++i)
    {
        if(sum[i] > max)
        {
            max = sum[i];
            ans = i;
        }
    }
    printf("%d\n", ans+1);
    return 0;
}
