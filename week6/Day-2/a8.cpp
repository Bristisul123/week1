#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define nl "\n"
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
typedef unsigned long long  ull;
using namespace std;


void solve()
{   
int  j = 1;
    while (true)
    {
        int n,q; cin>> n>>q;
        if( n ==0 and q == 0) break;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        sort(v.begin(),v.end());

        cout << "CASE# "<< j<< ":"<< endl;
        for (int i = 0; i < q; ++i)
        {
            int query;
            cin >> query;

            auto it = lower_bound(v.begin(), v.end(), query);
            if (it != v.end() and  *it == query)
                cout << query << " found at " << (it - v.begin() + 1) << endl;
            else
                cout << query << " not found" << endl;
        }
         j++;
    }
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1; //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
    


