#include <bits/stdc++.h>
using namespace std;

int main() 
{
int t; 
cin>>t;
for(int i =0;i<t;i++)
{
    int a,b,c,x,y,z;
    cin>>a>>b;
    if(a>=b)
    cout<<0<<endl;
    else
    {
        if(b-a>=8)
        {
        c=b-a;
        x=c/8;
        z=0;
        z+=x;
        y=c%8;
        z+=y;
        cout<<z<<endl;
        }
        else
        cout<<1<<endl;
    }
}
}
