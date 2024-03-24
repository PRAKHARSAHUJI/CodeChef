#include <iostream>
using namespace std;
int main() 
{
int t,x,y,a,b;
cin>>t;


for(int i = 0;i<t;i++)
{
cin>>x>>y>>a>>b;
int z = x+y+a+b;
if(z>=1)
cout<<"OUT"<<endl;
else
cout<<"IN"<<endl;
}
}