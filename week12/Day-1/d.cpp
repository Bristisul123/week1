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
    int n, cnt = 0; cin>>n;
    map<int,int>mp;
    while(n--)
    {
        int l,k; cin>>l>>k;
        mp[l]++;
        mp[k+1]--;
    }
  
  for(auto &i : mp)
  {
    if(i.second + cnt > 2) {
        no; return;
    }
     cnt += i.second;
  }
   yes;
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
    


