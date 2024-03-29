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

  int n, q,sum = 0, ans ; cin>>n>>q;
 vector<int> a(n),pre(n+1);
 for(int i = 0;i < n ; i++)
 {
    cin>>a[i];
    pre[i+1] = pre[i]+a[i];
 }
// cout<<pre[n]<<nl;
 while(q--)
 {
    ans = 0;
    int l,k,r; cin>>l>>r>>k;
      ans += pre[l-1]-pre[r] + k*(r-l+1);
   // cout<<ans<<nl;
  if((ans+pre[n]) % 2 ) yes;
 else no;
 }
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
    


