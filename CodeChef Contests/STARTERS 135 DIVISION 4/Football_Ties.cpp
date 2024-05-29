
// https://www.codechef.com/START135D/problems/FOOTBALLTIES


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        if(a%3 == 0 && b%3==0)
            cout<<0<<"\n";  
        else
        {
            int rem1 = a%3;
            int rem2 = b%3;
            if(rem1 == rem2)
            cout<<rem1;
        }
    }

}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t;
//     cin >>t;
//     while(t--)
//     {
//         int a,b;
//         cin >> a >> b;
//         // if(a == b)
//         // {
//         //     if(a%3 == 0 && b%3==0)
//         //     cout<<0;
//         // }

//         if(a%3 == 0 && b%3==0)
//             cout<<0<<"\n";
        
//         // else if(1)
//         else
//         {
//             int rem1 = a%3;
//             int rem2 = b%3;
//             if(rem1 == rem2)
//             cout<<rem1;
//         }



//     }

// }



