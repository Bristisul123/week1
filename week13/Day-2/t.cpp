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

  int n,m,val = 1, cnt = 0; cin >>n>>m;
  vector<int>v[n+1LL];
 for(int i = 1; i <= n; i++)
 {
    v[i].resize(m+1LL);
    for(int j = 1; j<= m;j++)
    {
        v[i][j] = val;
        val++;
    }
 }
  for(int i = 2; i<= n; i+=2)
  {
    for(int j = 1; j<=m ;j++)
       cout<< v[i][j] <<" ";
  }
   cout << nl;
   for(int i = 1; i<= n; i+=2)
  {
    for(int j = 1; j<=m ;j++)
       cout<< v[i][j] <<" ";
  }
   cout<< nl;
    
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
    


