#include <bits/stdc++.h>
using namespace std;

int main() 
{
int t; 
cin>>t;
for(int i =0;i<t;i++)
{
    int a,b,c,x,y,z;
    cin>>a>>b>>c;
    x=b/a;
    y=c-x;
    if(y<0)
    cout<<0;
    else
    cout<<y;
}
}
