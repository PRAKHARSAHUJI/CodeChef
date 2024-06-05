// https://www.codechef.com/START137D/problems/CMIX


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    
    while(t--) 
    {
        int n ; cin >>n;
        int arr[n],brr[n];
        for(int i = 0 ; i < n ;i++)
        {
            cin>>arr[i];
            cin>>brr[i];
        }
        int mx =0;
        for(int i = 0 ; i < n-1;i++)
        {
            for(int j = i+1; j<n;j++)
            {
                
                int a =(arr[i]*brr[j])+(arr[j]*brr[i]);
                mx = max(a,mx);
            }
        }
        cout<<mx<<endl;
    }

    return 0;
}

