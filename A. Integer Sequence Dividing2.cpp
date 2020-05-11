#include<iostream>
using namespace std;
int main()
{
    int n;
    int r;
    cin>>n;
    r=(n*(n+1))/2;
    if(r%2==0)
        cout<<"0"<<endl;
    else
        cout<<"1"<<endl;

}

