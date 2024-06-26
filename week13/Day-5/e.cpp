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

 int n,ans = 0,cnt = 0; cin>>n;
    vector<pair<int,int>> v;
    while(n--)
    {
      int s, e; cin>>s>>e;
      v.push_back({s,1});
      v.push_back({e,-1});
    }
    sort(all(v));
    for(int i = 0; i<v.size(); i++){
     cnt += v[i].second;
    ans = max(ans,cnt); 
    }
     cout<< ans <<nl;
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
    


