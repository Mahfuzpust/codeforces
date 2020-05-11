#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,p3;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin>>n;
       int p1=0,p2=0;
        for(j=1;j<n;j++)
        {
            if(j<n/2)
                p1=p1+pow(2,j);
            else
                p2=p2+pow(2,j);
        }
          p1=p1+pow(2,n);
          p3=p1-p2;
          cout << p3 << endl;
    }
    return 0;
}
