//                   ************************   Wrong Solution  ************************
// #include <iostream>
// using namespace std;
// int main ()
// {

// int t;
// cin>>t;
// for(int i = 0 ;i<t;i++)
// {
// int a , b;
// cin>>a>>b;
// if(a<b)
// {
// int x= b/a;
// cout<<x;
// }
// else if (a==b)
// {
// cout<<0;

// }

// }

// return 0;
// }


//                   ************************   Correct Solution  ************************

#include <iostream>
using namespace std;
int main ()
{

int t;
cin>>t;
for(int i = 0 ;i<t;i++)
{
int a , b;
cin>>a>>b;
if(b%a==0)
{
int x= (b/a)-1;
cout<<x<<endl;
}
else 
{
cout<<b/a<<endl;

}

}

return 0;
}