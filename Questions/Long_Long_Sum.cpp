// https://www.codechef.com/problems/BC106

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n ;
	cin >> n;
	
	vector <long long> v(n);
	long long sum = 0; 
	for(int i = 0 ; i < v.size() ; i++)
	{
	    cin>>v[i];
	    sum += v[i];
	}
	
	cout<<sum;

}