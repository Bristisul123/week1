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
      int n; cin>>n;
      map<int,int>mp;
      for(int i =0;i<n;i++)
      {
        int x;
        cin>>x;
        mp[x]++;
      }
      int cnt = mp.size();
      if((n-cnt) % 2) cnt--;
      cout<<cnt<<nl;

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
    


