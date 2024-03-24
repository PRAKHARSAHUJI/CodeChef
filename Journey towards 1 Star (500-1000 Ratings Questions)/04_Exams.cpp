// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here

// }

#include <iostream>
using namespace std;

int main() 
{
int t,x,y,z;
cin>>t;
for(int i = 0 ; i<t; i++)
	{
cin>>x>>y>>z;
float n = x*y;
float a = (z/n)*100;

    if(a>50){
    cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

    }

}


