#include <iostream>
using namespace std;



int main() 
{
int t,x,y,z;
cin>>t;


for(int i = 0;i<t;i++)
{
cin>>x;
if(x>5000)
cout<<x-500<<endl;
else if (1000<x &&x<=5000)
cout<<x-100<<endl; 
else if (100<x && x<=1000)
cout<<x-25<<endl; 
else
cout<<x<<endl; 
}
}