// https://www.codechef.com/START135D/problems/INVEQ


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // Read the number of test cases
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        
        // Edge case: if the string has length 1, it's already uniform
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        
        // Count the number of transitions
        int transitions = 0;
        for(int i = 1; i < n; i++) {
            if(s[i-1] != s[i]) {
                transitions++;
            }
        }
        
        // Calculate the minimum number of operations
        int min_operations = (transitions + 1) / 2;
        cout << min_operations << endl;
    }

    return 0;
}

// --------------------------------Incoreect Code-------------------------------------





// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
// 	// your code goes here
//     int t;
//     cin >>t;
//     while(t--)
//     {
//         int n;
//         string s;
//         cin >> n >> s;

//         int count = 1;
//         if(s.length()==1)
//         cout<<1;
//         else
//         {
//         for(int i = 1; i<s.length();i++ )
//         {
//             if(s[i-1]!=s[i])
//             count++;
//         }
//         cout<<count<<endl;
//         cout<<count-2;
//         }
        
        

//     }

// }

// --------------------------------Incoreect Code-------------------------------------



// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
// 	// your code goes here
//     int t;
//     cin >>t;
//     while(t--)
//     {
//         int n;
//         string s;
//         cin >> n >> s;
//         // int count_one=0;
//         // int count_zero=0;
//         int count = 1;

//         // for(int i = 0; i<s.length();i++ )
//         // {
//         //     if(s[i]=='1')
//         //     count_one++;
//         //     else
//         //     count_zero++;
//         // }

//         if(s.length()==1)
//         cout<<1;
//         else
//         {
//         for(int i = 1; i<s.length();i++ )
//         {
//             if(s[i-1]!=s[i])
//             count++;
//         }
//         cout<<count-2;
//         }
        
        

//     }

// }