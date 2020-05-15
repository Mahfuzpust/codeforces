#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n,i,m,o;
    cin >> t;
    while(t--)
    {
        cin >> n;
        i=0;
        while(n>1)
        {
          m=(-1+sqrt(1+24*n))/6;
          o=(m*(3*m+2-1))/2;
          n=n-o;
          i++;
        }
        cout << i << endl;
    }

}
