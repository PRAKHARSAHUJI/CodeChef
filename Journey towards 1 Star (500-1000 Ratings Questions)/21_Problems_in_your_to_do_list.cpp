#include <iostream>
using namespace std;
int main() 
{
    int t;
cin>>t;


for(int i = 0;i<t;i++)
{
int n;
cin>>n;
int arr[n];
for(int j =0 ; j<n;j++)
{
cin>>arr[j];

}

int count=0; 
for(int i =0;i<n;i++)
{
    if(arr[i]>=1000)
    count++;

}
cout<<count;
}

}