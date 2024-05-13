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

  int n,ans = 0; cin>>n;
  vector<int>v(n),mp(n+1);

  for(int i = 0; i<n;i++){
    cin>>v[i];
    if(v[i] >n) continue;
    mp[v[i]]++;
}
 for(int i = 1;i<=n;i++)
 {
    int cnt = 0;
    for(int j = 1; j*j <= i; j++)
    {
        if(i%j == 0){
            cnt += mp[j];
        if(j*j != i)
            cnt += mp[i/j];
    }
    }
    ans = max(ans,cnt);
 }
 cout<< ans<<nl;


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
    


