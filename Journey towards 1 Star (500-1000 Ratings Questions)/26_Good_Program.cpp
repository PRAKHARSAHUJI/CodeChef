// #include <iostream>
// using namespace std;
// int main ()
// {

// int t;
// cin>>t;
// for(int i = 0 ;i<t;i++)
// {
//     int a;
//     cin>>a;

//     if(a%4==0)
//     cout<<"GOOD"<<endl;
//     else
//     cout<<"NOT GOOD"<<endl;

// }

// return 0;
// }





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
    break;
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