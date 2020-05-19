#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,ans;
    cin >> t;
    while(t--)
    {
        cin >>n;
        if(n%2==0)
        {
            ans=(n/2)-1;
        }
        else{
            ans=n/2;
        }
        cout << ans <<endl;
    }
}
