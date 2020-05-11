#include<iostream>
using namespace std;
int main()
{
    int n,m,a,b,c=0;
    cin >> n >> m;
    for(a=0;a<=n;a++)
    {
        for(b=0;b<=m;b++)
        {
            if((a*a+b==n)&&(b*b+a==m))
               {
                   c++;
               }
        }
    }
    cout << c;
}
