#include <iostream>
using namespace std;

int main() 
{
int t;
cin>>t;
for(int i = 0 ; i<t; i++)
	{
	 int a,b;
	 cin>>a>>b;
     if(a<=6)
     cout<<b<<endl;
     else
     {
       if(a%6==0)
       cout<<b*(a/6)<<endl;
    else
       cout<<(b*(a/6))+b<<endl;

     }



    }


}