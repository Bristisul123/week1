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

  int n,k,ans = 0; cin>>n>>k;
  vector<int>v;

    for(int j = 1; j*j <= n; j++)
    {
        if(n%j == 0){
            v.push_back(j);
        
        if(j*j != n)
            v.push_back(n/j);
    }
   }
  sort(all(v));
 if(v.size() >= k) cout<< v[k-1]<<nl;
 else cout<< -1<<nl;

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
    
