#include <iostream>
using namespace std;

int main() 
{
int t,x,y;
cin>>t;


for(int i = 0;i<t;i++)
{int a;
cin>>x>>y;
a=x*y;
int b=a/100.0;
cout<<b<<endl;
}
}
// #include <iostream>

// using namespace std;

// // Function to calculate maximum number of bags Chef can get
// int maxBags(int X, int Y) {
//     int totalCredCoins = X * Y; // Total CRED coins earned
//     int maxBags = totalCredCoins / 100; // Maximum number of bags Chef can get
//     return maxBags;
// }

// int main() {
//     int T; // Number of test cases
//     cin >> T; // Input number of test cases

//     // Iterate through each test case
//     for (int i = 0; i < T; ++i) {
//         int X, Y; // Variables for the current test case
//         cin >> X >> Y; // Input X and Y for the current test case

//         // Calculate and print the maximum number of bags Chef can get
//         cout << maxBags(X, Y) << endl;
//     }

//     return 0;
// }
