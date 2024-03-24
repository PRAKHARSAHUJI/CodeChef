
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++)
{

    int n;
    cin>>n;
    int ans=0;
    while(n>0)
    {
    if(n % 2 == 1)
    {
      ans += 1;
      n=n/2;
    }
    else
    {
      ans += 0;
      n = n/2;
    }
}
    if(ans%2==0)
    cout<<"EVEN\n";
    else
    cout<<"ODD\n";
}
}