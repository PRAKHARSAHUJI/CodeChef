#include <iostream>
using namespace std;
int main ()
{

int t;
cin>>t;
for(int i = 0 ;i<t;i++)
{
    int x;
    cin>>x;
    if(x<4)
    cout<<1<<endl;
    else if(x%4==0)
    {
    cout<<(x/4)<<endl;
    }
    else
    cout<<(x/4)+1<<endl;
}

return 0;
}