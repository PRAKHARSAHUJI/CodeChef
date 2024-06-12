// https://www.codechef.com/START138D/problems/LONGDRIVE

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        long long totaldis = x * 10;
        long long speedinc = 100;
        long long initial_time = 10;
        for (int i = 1; i > 0; i++)
        {
            initial_time++;
            if ((totaldis + speedinc) / initial_time >= y)
            {
                cout << initial_time - 10 << "\n";
                break;
            }
            speedinc += 100;
        }
    }
}

/*
#include <bits/stdc++.h>
using namespace std;
int main()
    {
    int t;
    cin>>t;
    while(t--)
    {
    long long x , y ;
    cin>>x>>y;
    long long  totaldis = x*10;
    long long speedinc =100;
    long long initial_time=10;
    // long long timein = 0;
    // long long tot_time = initial_time+timein;
    for(int i = 1; i>0;i++)
    {
        // timein++;
        initial_time++;
        if((totaldis + speedinc)/initial_time >= y)
        {
            cout<<initial_time-10<<"\n";
            break;
        }
        speedinc+=100;
    }
}
}

*/