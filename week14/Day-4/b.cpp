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

  int n,m,ans = 0, cnt = 0; cin >>n>>m;
  vector<int>v(n),v2(n);

  for(int i=0;i<n;i++)
    cin>>v[i];
    
     for(int i=0;i<n;i++)
        cin>>v2[i];

    map<int,int> c1,c2;
     for(int i =0; i<n;i++)
     {
        c1[v[i] % m]++;
        c2[v2[i]% m]++;
     }   
     for(int i =0; i<m;i++)
     {
      int x = (m-i) % m;
      if(c1.count(i) and c2.count(x))
         ans +=( c1[i] * c2[x]);
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
    


