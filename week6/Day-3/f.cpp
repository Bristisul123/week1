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
  vector<int>a(n),bit(30);
  for(int i=0;i<n;i++)
    cin>>a[i];
for(int i = 0 ;i< 30; i++)
{
    for(int j = 0; j<n;j++)
    {
        if((a[j] & (1<<i)) != 0) bit[i]++;
    }
}
for (int i = 1; i < n+1; ++i)
{
    bool flag = 0;
    for(int j = 0; j< 30 ;j++)
    {
        if((bit[j] % i) != 0)
        {
            flag = 1; break;
        }
    }
    if(!flag) cout <<i<<" ";
}
  cout << nl;
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
    


