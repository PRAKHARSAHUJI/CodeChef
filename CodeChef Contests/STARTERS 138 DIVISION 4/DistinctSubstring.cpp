// https://www.codechef.com/START138D/problems/DISTSUB

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int minZeros = (k * (k + 1)) / 2;
        int minLength = minZeros + (k - 1);
        if (n == 1 && k <= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (minLength <= n)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}