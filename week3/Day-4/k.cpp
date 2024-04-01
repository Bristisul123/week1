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
    int n,ans = 0, mx = 0; cin>>n;
    vector<pair<int,int>>a,b,c;
    for(int i = 0;i<n;i++)
    {
        int x; cin>>x;
        a.push_back({x,i});
    }
     for(int i = 0;i<n;i++)
    {
        int x; cin>>x;
        b.push_back({x,i});
    }
     for(int j = 0;j<n;j++)
    {
        int x; cin>>x;
        c.push_back({x,j});
    }
    sort(a.rbegin(),a.rend());
   sort(b.rbegin(),b.rend());
   sort(c.rbegin(),c.rend());
   for(int i = 0;i<3;i++)
   {
    for(int j = 0; j<3; j++)
    {
        for(int k = 0;k<3;k++)
        {
           if(a[i].second != b[j].second && b[j].second != c[k].second && a[i].second != c[k].second){
                ans = max(ans, a[i].first + b[j].first + c[k].first);
            }
        }
    }
   }
   cout<<ans<<nl;
    
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
    