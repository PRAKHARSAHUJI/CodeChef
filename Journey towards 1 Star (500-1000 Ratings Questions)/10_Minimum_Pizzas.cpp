#include <iostream>
using namespace std;
int main() 
{
int t,x,y;
cin>>t;


for(int i = 0;i<t;i++)
{
cin>>x>>y;
int a = x*y;
if(a%4==0)
cout<<a/4<<endl;
else
cout<<(a/4)+1<<endl;
}
}