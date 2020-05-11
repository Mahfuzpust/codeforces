#include<stdio.h>
int main()
{
    int n,m,i,j,a[100],k;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=0;
    k=0;
    for(i=0;i<n;i++){
        j=j+a[i];
        if(j>m){
            j=0;
            i=i-1;
            k++;
        }
        else if(j==m){
            j=0;
            k++;
        }
        else if(j<m&&i==n-1)
            k++;
    }
    printf("%d\n",k);

    return 0;
}
