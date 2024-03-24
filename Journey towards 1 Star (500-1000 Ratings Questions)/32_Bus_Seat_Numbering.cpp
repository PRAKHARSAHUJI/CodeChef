#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 0 ;i<t;i++)
	{
	    int seat ;
	    cin>>seat;
	    
	    if(seat<=10 && seat >=1)
	    cout<<"Lower Double"<<endl;
	    else if (seat<=15 && seat >=11)
	    cout<<"Lower Single"<<endl;
	    else if (seat<=25 && seat >=16)
	    cout<<"Upper Double"<<endl;
	    else  
	    cout<<"Upper Single"<<endl;
	}

}
