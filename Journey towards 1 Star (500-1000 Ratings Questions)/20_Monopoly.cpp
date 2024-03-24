#include <iostream>
using namespace std;
int main() 
{
    int t;
cin>>t;


for(int i = 0;i<t;i++)
{
int x,y,a,b;
cin>>x>>y>>a>>b;
if(x>y+b+a || y>x+a+b || a>x+y+b || b>x+y+a)
{
    cout<<"YES"<<endl;
}
else 
{
    cout<<"NO"<<endl;
}
}
}