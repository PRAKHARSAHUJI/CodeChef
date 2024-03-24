// #include <bits/stdc++.h>
// using namespace std;

// int main() {


// }
#include <iostream>
using namespace std;

int main() 
{
int x,y;
cin>>x;
int lucky=0;
int unlucky=0;
for(int i = 0;i<x;i++)
{
    cin>>y;
    if(y%2==0)
    {
        lucky+=1;
    }
    else
    {
        unlucky+=1;
    }

}
if(lucky>unlucky)
cout<<"READY FOR BATTLE";
else
cout<<"NOT READY";

}

