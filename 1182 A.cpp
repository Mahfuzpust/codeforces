#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,p;
    cin >> n;
  if(n%2==0)
  {
      t=n/2;
      p =pow(2,t);
  }
  else{
    p=0;
  }
  cout << p;
    return 0;
}
