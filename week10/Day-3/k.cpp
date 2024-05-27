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

  int n ,ans = 0, c = 1,mod = 1e9+7, m; cin >>n>>m;
  while (m)
  {
     if(m & 1)
     {
         ans += c;
         ans = ans % mod;
     }
     m = m>>1;
     c *= n;
     c %= mod ; 
  }
   cout << ans <<nl;
  
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
    


