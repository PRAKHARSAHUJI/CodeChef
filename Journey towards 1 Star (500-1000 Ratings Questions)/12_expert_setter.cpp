#include <iostream>
using namespace std;
int main() 
{
int t;
float x,y;
cin>>t;


for(int i = 0;i<t;i++)
{
cin>>x>>y;
float z =y/x; 

if(z>=0.5)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}