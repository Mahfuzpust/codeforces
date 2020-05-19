#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin >> x>>y>>z;
    if(y>(x+z)&& y!=z){
        cout << "-";
    }
    else if(x>(y+z) && x!=y){
        cout << "+";
    }
    else if((x==y) && z==0){
        cout << "0";
    }
    else{
        cout << "?";
    }
    return 0;
}
