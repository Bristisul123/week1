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

  int n,k,sum = 0, cnt = 0; cin >>n>>k;
  vector<int>v(n);
  map<int,int>mp;

  for(int i=0;i<n;i++)
   {
    int x; cin>>x;
    if(i == 0) sum = x;
     sum &= x;
    for(int j = 0; j<31;j++)
    {
       if(( x & (1<<j)) == 0)
          mp[j] ++;
    }
   }
   for(int i = 30; i>=0; i--)
   {
     if(mp[i] > 0 and mp[i] <= k)
         k-= mp[i], sum |= (1<<i);
   }
      cout << sum <<nl;
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
    


