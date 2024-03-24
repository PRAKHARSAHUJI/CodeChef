#include <iostream>
using namespace std;
int main ()
{

int t;
cin>>t;
for(int i = 0 ;i<t;i++)
{
    int n,x;
    cin>>n>>x;
    int arr[n];
for(int i =0;i<n;i++)
{
    cin>>arr[i];
}
int eligible = 0;
for(int i=0;i<n;i++)
{
    if(arr[i]>=x)
    eligible++;
}
cout<<eligible<<endl;
}

return 0;
}