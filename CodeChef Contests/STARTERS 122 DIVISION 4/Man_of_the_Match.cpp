// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t;
	 cin>>t;
	 for(int i=0;i<t;i++)
	 {
        int point =0;
        int mom=0;
        
	   for(int i=1;i<=22;i++)
	   {
	     int a,b;
	     cin>>a>>b;
	     int p= a+(b*20);
	     if(p>point)
	     {
	         point=p;
	             mom=i;
	             
	     }
	 
	     
	   }
	   cout<<mom<<endl;
	  
	   
	 }

}
