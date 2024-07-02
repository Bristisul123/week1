#include<bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define nl "\n"
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
typedef unsigned long long  ull;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;


template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// multiset -> less_equall;   set --> less;



void solve()
{ 

  ll n ,k,c =0, cnt = 0; cin>>n;
    pbds<ll>p;
    for(int i = 1; i<= n; i++)
    {
        c++;
        int x; cin>>x;
        p.insert(x);
        cnt += (c - p.order_of_key(x) -1);
    }
  
    cout<< cnt <<nl;
 
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1; cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
    


