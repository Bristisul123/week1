#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define nl "\n"
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
typedef unsigned long long  ull;
using namespace std;


void solve()
{
        int n ,i = 0, j = 0; cin>>n;
        vector<int> a(n);
      for(int i = 0; i< n; i++)
        cin>>a[i];
      sort(a.begin(),a.end(), greater<int>());
      
     vector<pair<int, int>> v;
      while(i<n)
      {
        j = i; 
        while(i< n and a[i] == a[j])
          i++;
        v.push_back({a[j], i-j});
      }
         
      int  ans= v[0].second;
      for(int i = 1;i <= v.size()-1 ;i++)
      {
        if(v[i].first + 1 == v[i-1]. first)
          ans += max(0LL , v[i].second - v[i-1].second);
        else
          ans += v[i].second;
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
    