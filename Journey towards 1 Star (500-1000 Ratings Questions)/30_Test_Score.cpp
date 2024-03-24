// #include <iostream>
// using namespace std;
// int main ()
// {

// int t;
// cin>>t;
// for(int i = 0 ;i<t;i++)
// {
//     int x,y,z;
//     cin>>x>>y>>z;
//     if(z==0)
//     cout<<"YES"<<endl;
//     else if(z%y==0)
//     cout<<"YES"<<endl;
//     else
//     cout<<"NO"<<endl;

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
    int x,y,z;
    cin>>x>>y>>z;
    if(z%y==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}

return 0;
}