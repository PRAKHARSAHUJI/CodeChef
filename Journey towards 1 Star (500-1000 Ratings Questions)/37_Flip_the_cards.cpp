#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0; i<t;i++)
{
    int a,b;
    cin>>a>>b;
    if((a-b)>b)
    cout<<b<<endl;
    else
    cout<<a-b<<endl;
}
}
