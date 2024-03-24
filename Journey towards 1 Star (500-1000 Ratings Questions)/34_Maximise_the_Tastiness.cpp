#include <bits/stdc++.h>
using namespace std;
int main ()
{

int t;
cin>>t;
for(int i = 0 ;i<t;i++)
{
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    int x= max(a,b);
    int y= max(c,d);
    int z= (x+y);
    cout<<z<<endl; 
}
}