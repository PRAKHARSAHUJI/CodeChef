// https://www.codechef.com/START136D/problems/EVENSUMSUB


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxLength = 0;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += arr[j];
                if (sum % 2 == 0) {
                    maxLength = max(maxLength, j - i + 1);
                }
            }
        }

        cout << maxLength << "\n";
    }

    return 0;
}






// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i =0 ; i < n ; i++)
//         {
//             cin>>arr[i];
//         }
//         int sum = 0;
//         int mx = 0;
//         int mxsubarray = 0;
        
//         for(int i =0 ; i < n ; i++)
//         {
//             sum+=arr[i];
//             if(sum%2==0)
//             mxsubarray=i+1;
            
//         }

//         cout<<mxsubarray;
//     }
    
// }
