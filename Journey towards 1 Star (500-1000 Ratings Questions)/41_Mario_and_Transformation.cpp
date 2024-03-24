#include <bits/stdc++.h>
using namespace std;

int main() {
int t ;
cin>>t;
for(int i =0; i<t;i++)
{
    int a;
    cin>>a;

    if(a%3==0)
    cout<<"NORMAL"<<endl;
    if(a%3==2)
    cout<<"SMALL"<<endl;
    if(a%3==1)
    cout<<"HUGE"<<endl;
}

}