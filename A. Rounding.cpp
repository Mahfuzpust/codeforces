#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,m;
    cin >> n;
    r=n%10;
    if(r<5)
    {
        cout << (n-r);
    }
    else
    {
        cout << (n+(10-r));
    }
    return 0;
}
