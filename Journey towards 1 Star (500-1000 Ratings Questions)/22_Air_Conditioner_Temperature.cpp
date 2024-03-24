#include <iostream>
#include <cmath>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0; i<t;i++)
{
int a,b,c;
cin>>a>>b>>c;
if(max(a,c)<=b)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
    return 0;
}


