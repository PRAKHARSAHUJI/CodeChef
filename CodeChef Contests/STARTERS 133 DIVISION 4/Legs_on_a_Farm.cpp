// https://www.codechef.com/START133D/problems/FARMLEGS


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >>t;
    while(t--)
    {
        int a;
        cin >> a;
        if(a%4 == 0)
        cout<<a/4<<'\n';
        else
        cout<<(a/4 +1)<<'\n';
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
//         int a;
//         cin >> a;
//         if(a==2)
//         cout<<1<<'\n';
//         else if(a==4)
//         cout<<1<<'\n';
//         else if(a%4 == 0)
//         cout<<a/4<<'\n';
//         else
//         cout<<(a/4 +1)<<'\n';
//     }
    
    
// }


