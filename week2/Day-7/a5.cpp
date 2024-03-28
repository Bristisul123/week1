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
 
  int n , m; cin>>n>>m;
  vector<int>a(n);
  map<int, int> mp;
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  int l = 0, r = 0, ans = 0, sum = 0;
 
  while(r<n)
  {
     mp[a[r]]++;
     while(mp.size() > m)
     {
        mp[a[l]]--;
        if(mp[a[l]] == 0)
            mp.erase(a[l]);
        l++;
     }
     ans+=r-l+1;
     r++;
 }
   cout<< ans<<nl;
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
    


