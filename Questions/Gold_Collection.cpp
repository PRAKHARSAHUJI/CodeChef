// https://www.codechef.com/problems/GOLDTRIP

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int prefix_sum[n];
        vector<int> v(n);
        for (int i = 0; i < v.size(); i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (i == 0)
                prefix_sum[i] = v[i];
            else
                prefix_sum[i] = prefix_sum[i - 1] + v[i];
        }

        int q;
        cin >> q;
        while (q--)
        {
            int start;
            cin >> start;
            int end;
            cin >> end;
            if (start - 1 == 0)
                cout << prefix_sum[end - 1] << '\n';
            else
                cout << prefix_sum[end - 1] - prefix_sum[start - 2] << '\n';
        }
    }
}

// int q;
// cin>>q;
// while(q--)
// {
//     int start;
//     cin >> start;
//     int end;
//     cin >> end;
//     cout<<prefix_sum[end-1]-prefix_sum[start-1]<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t ;
// 	cin >> t ;

// 	while(t--)
// 	{
// 	    int n ;
// 	    cin >> n ;
// 	    vector<int>v(n);
// 	    for(int i = 0 ; i<v.size() ; i++ )
// 	    {
// 	        cin >> v[i] ;
// 	    }
// 	    int q ;
// 	    cin>>q ;
// 	    while(q--)
// 	    {
// 	        int start ;
// 	        cin >> start ;
// 	        int end ;
// 	        cin >> end ;
// 	        int sum = 0 ;
// 	        for( int j = start-1 ;  j<end ; j++ )
// 	        {
// 	            sum+=v[j];
// 	        }
// 	        cout<<sum<<endl;
// 	    }

// 	}

// }