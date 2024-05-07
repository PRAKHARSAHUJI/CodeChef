// https://www.codechef.com/problems/ZOZ

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >>t;
	while (t--)
	{
	    int n ;
	    cin >> n ;
	    int k ;
	    cin >> k ;
	    int sum = 0;
	    int count = 0;
	    vector<int>v(n);
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin>>v[i];
	        sum+=v[i];
	    }
	    for(int i = 0 ; i < n ; i++)
	    {
	    
	       if( (v[i]+k) > (sum - v[i]) )
	       count+=1;
	    }
	    cout<<count<<endl;
	}

}


/*
Input 

2
4 4
2 1 6 7
4 2
2 1 5 4


Output
1
0


*/