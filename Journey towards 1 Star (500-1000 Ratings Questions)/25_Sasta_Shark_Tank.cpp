#include <iostream>
using namespace std;
int main ()
{

int t;
cin>>t;
for(int i = 0 ;i<t;i++)
{
    int a,b;
    cin>>a>>b;

    if(a*10==b*5)
    cout<<"ANY"<<endl;
    else if(a*10>b*5)
    cout<<"FIRST"<<endl;
    else
    cout<<"SECOND"<<endl;

}

return 0;
}