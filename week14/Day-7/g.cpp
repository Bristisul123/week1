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


template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// multiset -> less_equall;   set --> less;



void solve()
{ 

  ll n ,cnt = 0; cin>>n;
    pbds<ll>p;
    vector<pair<int,int>>v(n);
    for(int i = 0; i< n; i++)
    {
        int x,y; cin>>x>>y;
        v[i] = {x,y};
    }
  sort(v.begin(),v.end());
    for(int i = 0; i<n ; i++)
         p.insert(v[i].second);     
    for(int i=0; i<n;i++)
    {
        cnt += p.order_of_key(v[i].second);
        p.erase(v[i].second);
    }  
    cout<< cnt<<nl;
 
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
    
