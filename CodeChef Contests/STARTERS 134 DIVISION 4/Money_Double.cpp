// https://www.codechef.com/START134D/problems/MONEYDOUBLE


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int amt;
        int years;
        cin>>amt;
        cin>>years;
        for(int i = 0 ; i< years ; i++)
        {
            if((amt*2) > (amt+1000))
            amt *= 2;
            else
            amt += 1000;

        }
        cout<<amt<<"\n";
    }
}