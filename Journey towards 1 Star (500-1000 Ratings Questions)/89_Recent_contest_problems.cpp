#include <iostream>
using namespace std;
int main ()
{

int t;
cin>>t;
for(int i = 0 ;i<t;i++)
{
    int x;
    int s=0,l=0;
    cin>>x;
    for(int i =0;i<x;i++)
    {
    string str;
    cin>>str;
    if(str == "START38")
    s++;
    if(str == "LTIME108")
    l++;

    }
cout<<s<<" ";
cout<<l<<endl;

}

return 0;
}