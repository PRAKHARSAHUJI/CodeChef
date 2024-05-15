// https://www.codechef.com/START134D/problems/ROCPAPSCI


// -------------------------- INCORRECT CODE------------------------- 





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
//     cin>>t;

//     while (t--)
//     {
//         int count = 1;
//         int moves;
//         cin>> moves;
//         string s;
//         cin >> s;
//         // sort(s.begin(),s.end());
//         for(int i = 1 ; i < s.length() ; i++)
//         {
//             if(s[i-1]!=s[i])
//             count++;
//         }
//         if(s.length()==1)
//         cout<<1<<"\n";
//         else
//         cout<<count+1<<"\n";
        
//     }
    

// }

// -------------------------- INCORRECT CODE------------------------- 


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
//     cin>>t;

//     while (t--)
//     {
//         int moves;
//         cin>> moves;
//         string s;
//         cin >> s;
//         int mx_win = s.length();
//         int deduct = 0;
//         int count = 0 ;
//         for(int i = 1 ; i < s.length() ; i++)
//         {
//             if(s[i-1]==s[i])
//             count++;
            
//             if(count%2==0)
//             {
//                 deduct=(count%2);
//             }
//             else
//             {
//                 deduct=(count%2)+1;
//             }
//         }

//        cout<<mx_win-deduct<<"\n";
        
//     }
    

// }