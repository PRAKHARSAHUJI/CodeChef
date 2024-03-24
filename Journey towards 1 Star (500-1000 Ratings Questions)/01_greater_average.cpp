#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	for(int i = 0 ; i<t; i++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    float x = (a+b)/2.0;
        if(x>c)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
	}

}