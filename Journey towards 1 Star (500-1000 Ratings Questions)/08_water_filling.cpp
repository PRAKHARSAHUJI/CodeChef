#include <iostream>
using namespace std;



int main() 
{
int t,x,y,z;
cin>>t;


for(int i = 0;i<t;i++)
{
cin>>x>>y>>z;
if(x+y+z<2)
cout<<"Water filling time"<<endl;

else
cout<<"Not now"<<endl;
}
}