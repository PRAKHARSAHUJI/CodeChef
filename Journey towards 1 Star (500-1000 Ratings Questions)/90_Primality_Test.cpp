#include <iostream>
using namespace std;
int main ()
{

int t;
cin>>t;
for(int i = 0 ;i<t;i++)
{
int x=0;    
int a;
cin>>a;

for(int i=2; i<a;i++)
{
if(a%i==0)
{
    x=1;
}
}
if(a==1)
cout<<"no"<<endl;
else if(x==1)
cout<<"no"<<endl;
else
cout<<"yes"<<endl;


{

}
}

return 0;
}