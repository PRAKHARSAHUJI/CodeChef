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
if(x<=a && y<=b)
{
    cout<<"POSSIBLE"<<endl;
}
else 
{
    cout<<"IMPOSSIBLE"<<endl;
}
}
}