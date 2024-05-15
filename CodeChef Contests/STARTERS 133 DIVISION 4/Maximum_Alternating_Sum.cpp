// https://www.codechef.com/START133D/problems/MXALT

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int sum = 0;
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (n % 2 != 0)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (j >= n / 2)
                {
                    sum += v[j];
                }
                else
                    sum = sum - v[j];
            }
            cout << sum << endl;
        }
        else
        {
            for (int k = n - 1; k >= 0; k--)
            {
                if (k >= n / 2)
                {
                    sum += v[k];
                }
                else
                    sum = sum - v[k];
            }
            cout << sum << endl;
        }
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;cin>>n;
// 	    vector<long long>v(n);
// 	    for(int i=0;i<n;i++){
// 	        cin>>v[i];
// 	    }
// 	    sort(v.begin(),v.end());
// 	    vector<int>ans(n);
// 	    int i=0;int j=n-1,k=0;
// 	    while(k<n){
// 	        if(k&1){
// 	            ans[k]=v[i];
// 	            i++;
// 	        }
// 	        else{
// 	            ans[k]=v[j];
// 	            j--;
// 	        }
// 	        k++;

// 	    }
// 	    long long sum=0;
// 	    for(int i=0;i<n;i++){
// 	        if(i&1){
// 	            sum+=(-1)*(ans[i]);
// 	        }
// 	        else{
// 	            sum+=ans[i];
// 	        }
// 	    }
// 	    cout<<sum<<endl;
// 	}

// }