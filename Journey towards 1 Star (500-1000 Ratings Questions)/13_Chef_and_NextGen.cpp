#include <iostream>
using namespace std;
int main() 
{
int t;
float x,y,a,b;
cin>>t;


for(int i = 0;i<t;i++)
{
cin>>x>>y>>a>>b;
float u= x*y;
float v = a*b;



if(v>=u)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
}